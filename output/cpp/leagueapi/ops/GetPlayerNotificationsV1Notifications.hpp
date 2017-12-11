#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerNotificationResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<PlayerNotificationResource>> GetPlayerNotificationsV1Notifications (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/player-notifications/v1/notifications?", { 
    }, { 
    }) };
  }
} 