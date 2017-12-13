#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LCDSLoyaltyRewards.hpp>
#include <lol/def/LCDSLoyaltyStateChangeNotificationCategory.hpp>
namespace lol {
  struct LCDSLoyaltyStateChangeNotification { 
    LCDSLoyaltyRewards rewards;
    uint64_t accountId;
    LCDSLoyaltyStateChangeNotificationCategory notificationCategory; 
  };
  void to_json(json& j, const LCDSLoyaltyStateChangeNotification& v) {
  j["rewards"] = v.rewards; 
  j["accountId"] = v.accountId; 
  j["notificationCategory"] = v.notificationCategory; 
  }
  void from_json(const json& j, LCDSLoyaltyStateChangeNotification& v) {
  v.rewards = j.at("rewards").get<LCDSLoyaltyRewards>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  v.notificationCategory = j.at("notificationCategory").get<LCDSLoyaltyStateChangeNotificationCategory>(); 
  }
}