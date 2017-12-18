#pragma once
#include "../base_def.hpp" 
#include "LCDSLoyaltyStateChangeNotificationCategory.hpp"
#include "LCDSLoyaltyRewards.hpp"
namespace lol {
  struct LCDSLoyaltyStateChangeNotification { 
    LCDSLoyaltyRewards rewards;
    LCDSLoyaltyStateChangeNotificationCategory notificationCategory;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LCDSLoyaltyStateChangeNotification& v) {
    j["rewards"] = v.rewards; 
    j["notificationCategory"] = v.notificationCategory; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LCDSLoyaltyStateChangeNotification& v) {
    v.rewards = j.at("rewards").get<LCDSLoyaltyRewards>(); 
    v.notificationCategory = j.at("notificationCategory").get<LCDSLoyaltyStateChangeNotificationCategory>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}