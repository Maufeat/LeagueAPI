#pragma once
#include "../base_def.hpp" 
#include "LolQueueEligibilityCollectionsRental.hpp"
namespace lol {
  struct LolQueueEligibilityCollectionsOwnership { 
    bool owned;
    LolQueueEligibilityCollectionsRental rental;
    bool freeToPlayReward; 
  };
  inline void to_json(json& j, const LolQueueEligibilityCollectionsOwnership& v) {
    j["owned"] = v.owned; 
    j["rental"] = v.rental; 
    j["freeToPlayReward"] = v.freeToPlayReward; 
  }
  inline void from_json(const json& j, LolQueueEligibilityCollectionsOwnership& v) {
    v.owned = j.at("owned").get<bool>(); 
    v.rental = j.at("rental").get<LolQueueEligibilityCollectionsRental>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  }
}