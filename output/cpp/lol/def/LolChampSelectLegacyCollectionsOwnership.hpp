#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampSelectLegacyCollectionsRental.hpp>
namespace lol {
  struct LolChampSelectLegacyCollectionsOwnership { 
    LolChampSelectLegacyCollectionsRental rental;
    bool freeToPlayReward;
    bool owned; 
  };
  void to_json(json& j, const LolChampSelectLegacyCollectionsOwnership& v) {
  j["rental"] = v.rental; 
  j["freeToPlayReward"] = v.freeToPlayReward; 
  j["owned"] = v.owned; 
  }
  void from_json(const json& j, LolChampSelectLegacyCollectionsOwnership& v) {
  v.rental = j.at("rental").get<LolChampSelectLegacyCollectionsRental>(); 
  v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  v.owned = j.at("owned").get<bool>(); 
  }
}