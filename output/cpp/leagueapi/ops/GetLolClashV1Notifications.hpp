#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashPlayerNotificationData.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolClashPlayerNotificationData> GetLolClashV1Notifications (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/notifications?", { 
    }, { 
    }) };
  }
} 