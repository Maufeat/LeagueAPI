#pragma once
#include "../base_def.hpp" 
#include "LolLootCollectionsRental.hpp"
namespace lol {
  struct LolLootCollectionsOwnership { 
    bool owned;
    LolLootCollectionsRental rental;
    bool freeToPlayReward; 
  };
  inline void to_json(json& j, const LolLootCollectionsOwnership& v) {
    j["owned"] = v.owned; 
    j["rental"] = v.rental; 
    j["freeToPlayReward"] = v.freeToPlayReward; 
  }
  inline void from_json(const json& j, LolLootCollectionsOwnership& v) {
    v.owned = j.at("owned").get<bool>(); 
    v.rental = j.at("rental").get<LolLootCollectionsRental>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  }
}