#pragma once
#include "../base_def.hpp" 
#include "LolLootCollectionsRental.hpp"
namespace lol {
  struct LolLootCollectionsOwnership { 
    bool freeToPlayReward;
    LolLootCollectionsRental rental;
    bool owned; 
  };
  inline void to_json(json& j, const LolLootCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward; 
    j["rental"] = v.rental; 
    j["owned"] = v.owned; 
  }
  inline void from_json(const json& j, LolLootCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.rental = j.at("rental").get<LolLootCollectionsRental>(); 
    v.owned = j.at("owned").get<bool>(); 
  }
}