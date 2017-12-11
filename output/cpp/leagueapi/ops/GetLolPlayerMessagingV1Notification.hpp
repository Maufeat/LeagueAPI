#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerMessagingNotificationResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PlayerMessagingNotificationResource> GetLolPlayerMessagingV1Notification (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-player-messaging/v1/notification?", { 
    }, { 
    }) };
  }
} 