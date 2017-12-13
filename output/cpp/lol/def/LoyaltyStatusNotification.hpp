#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LoyaltyStatus.hpp>
#include <lol/def/LoyaltyRewards.hpp>
namespace lol {
  struct LoyaltyStatusNotification { 
    LoyaltyRewards rewards;
    LoyaltyStatus status; 
  };
  void to_json(json& j, const LoyaltyStatusNotification& v) {
    j["rewards"] = v.rewards; 
    j["status"] = v.status; 
  }
  void from_json(const json& j, LoyaltyStatusNotification& v) {
    v.rewards = j.at("rewards").get<LoyaltyRewards>(); 
    v.status = j.at("status").get<LoyaltyStatus>(); 
  }
}