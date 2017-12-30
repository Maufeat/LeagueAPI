#pragma once
#include "../base_def.hpp" 
#include "LCDSLoyaltyRewards.hpp"
#include "LCDSLoyaltyStateChangeNotificationCategory.hpp"
namespace lol {
  struct LCDSLoyaltyStateChangeNotification { 
    uint64_t accountId;
    LCDSLoyaltyStateChangeNotificationCategory notificationCategory;
    LCDSLoyaltyRewards rewards; 
  };
  inline void to_json(json& j, const LCDSLoyaltyStateChangeNotification& v) {
    j["accountId"] = v.accountId; 
    j["notificationCategory"] = v.notificationCategory; 
    j["rewards"] = v.rewards; 
  }
  inline void from_json(const json& j, LCDSLoyaltyStateChangeNotification& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.notificationCategory = j.at("notificationCategory").get<LCDSLoyaltyStateChangeNotificationCategory>(); 
    v.rewards = j.at("rewards").get<LCDSLoyaltyRewards>(); 
  }
}