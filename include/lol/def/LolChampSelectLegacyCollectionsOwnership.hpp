#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectLegacyCollectionsRental.hpp"
namespace lol {
  struct LolChampSelectLegacyCollectionsOwnership { 
    bool freeToPlayReward;
    bool owned;
    LolChampSelectLegacyCollectionsRental rental; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward; 
    j["owned"] = v.owned; 
    j["rental"] = v.rental; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.rental = j.at("rental").get<LolChampSelectLegacyCollectionsRental>(); 
  }
}