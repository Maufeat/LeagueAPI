#pragma once
#include "../base_def.hpp" 
#include "LolQueueEligibilityCollectionsRental.hpp"
namespace lol {
  struct LolQueueEligibilityCollectionsOwnership { 
    bool freeToPlayReward;
    bool owned;
    LolQueueEligibilityCollectionsRental rental; 
  };
  inline void to_json(json& j, const LolQueueEligibilityCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward; 
    j["owned"] = v.owned; 
    j["rental"] = v.rental; 
  }
  inline void from_json(const json& j, LolQueueEligibilityCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.rental = j.at("rental").get<LolQueueEligibilityCollectionsRental>(); 
  }
}