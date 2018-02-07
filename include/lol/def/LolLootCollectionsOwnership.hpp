#pragma once
#include "../base_def.hpp" 
#include "LolLootCollectionsRental.hpp"
namespace lol {
  struct LolLootCollectionsOwnership { 
    bool freeToPlayReward;
    bool owned;
    LolLootCollectionsRental rental; 
  };
  inline void to_json(json& j, const LolLootCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward; 
    j["owned"] = v.owned; 
    j["rental"] = v.rental; 
  }
  inline void from_json(const json& j, LolLootCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.rental = j.at("rental").get<LolLootCollectionsRental>(); 
  }
}