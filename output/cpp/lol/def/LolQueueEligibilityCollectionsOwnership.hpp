#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolQueueEligibilityCollectionsRental.hpp>
namespace lol {
  struct LolQueueEligibilityCollectionsOwnership { 
    LolQueueEligibilityCollectionsRental rental;
    bool owned;
    bool freeToPlayReward; 
  };
  void to_json(json& j, const LolQueueEligibilityCollectionsOwnership& v) {
  j["rental"] = v.rental; 
  j["owned"] = v.owned; 
  j["freeToPlayReward"] = v.freeToPlayReward; 
  }
  void from_json(const json& j, LolQueueEligibilityCollectionsOwnership& v) {
  v.rental = j.at("rental").get<LolQueueEligibilityCollectionsRental>(); 
  v.owned = j.at("owned").get<bool>(); 
  v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  }
}