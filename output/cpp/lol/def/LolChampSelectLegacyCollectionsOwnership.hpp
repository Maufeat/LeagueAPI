#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampSelectLegacyCollectionsRental.hpp>
namespace lol {
  struct LolChampSelectLegacyCollectionsOwnership { 
    LolChampSelectLegacyCollectionsRental rental;
    bool owned;
    bool freeToPlayReward; 
  };
  void to_json(json& j, const LolChampSelectLegacyCollectionsOwnership& v) {
  j["rental"] = v.rental; 
  j["owned"] = v.owned; 
  j["freeToPlayReward"] = v.freeToPlayReward; 
  }
  void from_json(const json& j, LolChampSelectLegacyCollectionsOwnership& v) {
  v.rental = j.at("rental").get<LolChampSelectLegacyCollectionsRental>(); 
  v.owned = j.at("owned").get<bool>(); 
  v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  }
}