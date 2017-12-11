#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LoyaltyRewards.hpp>"
#include "<leagueapi/definitions/LoyaltyStatus.hpp>"

namespace leagueapi {
  struct LoyaltyStatusNotification { /**/ 
    LoyaltyRewards rewards;/**/
    LoyaltyStatus status;/**/
  };
  static void to_json(json& j, const LoyaltyStatusNotification& v) { 
    j["rewards"] = v.rewards;
    j["status"] = v.status;
  }
  static void from_json(const json& j, LoyaltyStatusNotification& v) { 
    v.rewards = j.at("rewards").get<LoyaltyRewards>(); 
    v.status = j.at("status").get<LoyaltyStatus>(); 
  }
} 