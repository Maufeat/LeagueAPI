#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LCDSLoyaltyStateChangeNotificationCategory.hpp>
#include <lol/def/LCDSLoyaltyRewards.hpp>
namespace lol {
  struct LCDSLoyaltyStateChangeNotification { 
    LCDSLoyaltyRewards rewards;
    LCDSLoyaltyStateChangeNotificationCategory notificationCategory;
    uint64_t accountId; 
  };
  void to_json(json& j, const LCDSLoyaltyStateChangeNotification& v) {
    j["rewards"] = v.rewards; 
    j["notificationCategory"] = v.notificationCategory; 
    j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LCDSLoyaltyStateChangeNotification& v) {
    v.rewards = j.at("rewards").get<LCDSLoyaltyRewards>(); 
    v.notificationCategory = j.at("notificationCategory").get<LCDSLoyaltyStateChangeNotificationCategory>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}