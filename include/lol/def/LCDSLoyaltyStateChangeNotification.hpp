#pragma once
#include "../base_def.hpp" 
#include "LCDSLoyaltyStateChangeNotificationCategory.hpp"
#include "LCDSLoyaltyRewards.hpp"
namespace lol {
  struct LCDSLoyaltyStateChangeNotification { 
    LCDSLoyaltyStateChangeNotificationCategory notificationCategory;
    uint64_t accountId;
    LCDSLoyaltyRewards rewards; 
  };
  inline void to_json(json& j, const LCDSLoyaltyStateChangeNotification& v) {
    j["notificationCategory"] = v.notificationCategory; 
    j["accountId"] = v.accountId; 
    j["rewards"] = v.rewards; 
  }
  inline void from_json(const json& j, LCDSLoyaltyStateChangeNotification& v) {
    v.notificationCategory = j.at("notificationCategory").get<LCDSLoyaltyStateChangeNotificationCategory>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.rewards = j.at("rewards").get<LCDSLoyaltyRewards>(); 
  }
}