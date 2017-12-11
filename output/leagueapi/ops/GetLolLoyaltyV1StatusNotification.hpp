#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LoyaltyStatusNotification.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LoyaltyStatusNotification> GetLolLoyaltyV1StatusNotification (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-loyalty/v1/status-notification?", { 
    }, { 
    },"") };
  }
} 