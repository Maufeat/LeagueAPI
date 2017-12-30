#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectLegacyCollectionsRental.hpp"
namespace lol {
  struct LolChampSelectLegacyCollectionsOwnership { 
    bool freeToPlayReward;
    LolChampSelectLegacyCollectionsRental rental;
    bool owned; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward; 
    j["rental"] = v.rental; 
    j["owned"] = v.owned; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.rental = j.at("rental").get<LolChampSelectLegacyCollectionsRental>(); 
    v.owned = j.at("owned").get<bool>(); 
  }
}