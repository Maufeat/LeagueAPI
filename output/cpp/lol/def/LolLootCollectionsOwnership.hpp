#pragma once
#include "../base_def.hpp" 
#include "LolLootCollectionsRental.hpp"
namespace lol {
  struct LolLootCollectionsOwnership { 
    LolLootCollectionsRental rental;
    bool owned;
    bool freeToPlayReward; 
  };
  inline void to_json(json& j, const LolLootCollectionsOwnership& v) {
    j["rental"] = v.rental; 
    j["owned"] = v.owned; 
    j["freeToPlayReward"] = v.freeToPlayReward; 
  }
  inline void from_json(const json& j, LolLootCollectionsOwnership& v) {
    v.rental = j.at("rental").get<LolLootCollectionsRental>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  }
}