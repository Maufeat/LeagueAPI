#pragma once
#include "../base_def.hpp" 
#include "LoyaltyRewards.hpp"
#include "LoyaltyStatus.hpp"
namespace lol {
  struct LoyaltyStatusNotification { 
    LoyaltyStatus status;
    LoyaltyRewards rewards; 
  };
  inline void to_json(json& j, const LoyaltyStatusNotification& v) {
    j["status"] = v.status; 
    j["rewards"] = v.rewards; 
  }
  inline void from_json(const json& j, LoyaltyStatusNotification& v) {
    v.status = j.at("status").get<LoyaltyStatus>(); 
    v.rewards = j.at("rewards").get<LoyaltyRewards>(); 
  }
}