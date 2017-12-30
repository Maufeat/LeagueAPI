#pragma once
#include "../base_def.hpp" 
#include "LolQueueEligibilityCollectionsRental.hpp"
namespace lol {
  struct LolQueueEligibilityCollectionsOwnership { 
    bool freeToPlayReward;
    LolQueueEligibilityCollectionsRental rental;
    bool owned; 
  };
  inline void to_json(json& j, const LolQueueEligibilityCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward; 
    j["rental"] = v.rental; 
    j["owned"] = v.owned; 
  }
  inline void from_json(const json& j, LolQueueEligibilityCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.rental = j.at("rental").get<LolQueueEligibilityCollectionsRental>(); 
    v.owned = j.at("owned").get<bool>(); 
  }
}