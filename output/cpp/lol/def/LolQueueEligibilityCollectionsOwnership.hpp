#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolQueueEligibilityCollectionsRental.hpp>
namespace lol {
  struct LolQueueEligibilityCollectionsOwnership { 
    LolQueueEligibilityCollectionsRental rental;
    bool freeToPlayReward;
    bool owned; 
  };
  void to_json(json& j, const LolQueueEligibilityCollectionsOwnership& v) {
  j["rental"] = v.rental; 
  j["freeToPlayReward"] = v.freeToPlayReward; 
  j["owned"] = v.owned; 
  }
  void from_json(const json& j, LolQueueEligibilityCollectionsOwnership& v) {
  v.rental = j.at("rental").get<LolQueueEligibilityCollectionsRental>(); 
  v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  v.owned = j.at("owned").get<bool>(); 
  }
}