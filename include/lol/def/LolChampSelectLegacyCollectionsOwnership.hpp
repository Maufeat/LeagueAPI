#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectLegacyCollectionsRental.hpp"
namespace lol {
  struct LolChampSelectLegacyCollectionsOwnership { 
    bool owned;
    LolChampSelectLegacyCollectionsRental rental;
    bool freeToPlayReward; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyCollectionsOwnership& v) {
    j["owned"] = v.owned; 
    j["rental"] = v.rental; 
    j["freeToPlayReward"] = v.freeToPlayReward; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyCollectionsOwnership& v) {
    v.owned = j.at("owned").get<bool>(); 
    v.rental = j.at("rental").get<LolChampSelectLegacyCollectionsRental>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  }
}