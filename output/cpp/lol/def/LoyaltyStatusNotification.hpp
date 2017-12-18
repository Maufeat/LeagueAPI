#pragma once
#include "../base_def.hpp" 
#include "LoyaltyStatus.hpp"
#include "LoyaltyRewards.hpp"
namespace lol {
  struct LoyaltyStatusNotification { 
    LoyaltyRewards rewards;
    LoyaltyStatus status; 
  };
  inline void to_json(json& j, const LoyaltyStatusNotification& v) {
    j["rewards"] = v.rewards; 
    j["status"] = v.status; 
  }
  inline void from_json(const json& j, LoyaltyStatusNotification& v) {
    v.rewards = j.at("rewards").get<LoyaltyRewards>(); 
    v.status = j.at("status").get<LoyaltyStatus>(); 
  }
}