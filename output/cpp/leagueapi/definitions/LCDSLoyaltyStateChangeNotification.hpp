#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LCDSLoyaltyRewards.hpp>
#include <leagueapi/definitions/LCDSLoyaltyStateChangeNotificationCategory.hpp>

namespace leagueapi {
  struct LCDSLoyaltyStateChangeNotification { /**/ 
    LCDSLoyaltyRewards rewards;/**/
    uint64_t accountId;/**/
    LCDSLoyaltyStateChangeNotificationCategory notificationCategory;/**/
  };
  static void to_json(json& j, const LCDSLoyaltyStateChangeNotification& v) { 
    j["rewards"] = v.rewards;
    j["accountId"] = v.accountId;
    j["notificationCategory"] = v.notificationCategory;
  }
  static void from_json(const json& j, LCDSLoyaltyStateChangeNotification& v) { 
    v.rewards = j.at("rewards").get<LCDSLoyaltyRewards>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.notificationCategory = j.at("notificationCategory").get<LCDSLoyaltyStateChangeNotificationCategory>(); 
  }
} 