#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerNotificationResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PlayerNotificationResource> PostPlayerNotificationsV1Notifications (const https::Info& _info_,
      const PlayerNotificationResource& notification /**/ )
  { 
    return { https::Do(_info_, "post", "/player-notifications/v1/notifications?", { 
    }, { 
    },notification) };
  }
} 