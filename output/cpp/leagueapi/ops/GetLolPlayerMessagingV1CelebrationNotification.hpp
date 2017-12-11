#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/DynamicCelebrationMessagingNotificationResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<DynamicCelebrationMessagingNotificationResource> GetLolPlayerMessagingV1CelebrationNotification (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-player-messaging/v1/celebration/notification?", { 
    }, { 
    }) };
  }
} 