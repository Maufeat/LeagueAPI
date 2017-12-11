#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerNotificationConfigResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PlayerNotificationConfigResource> PutPlayerNotificationsV1Config (const https::Info& _info_,
      const PlayerNotificationConfigResource& config /**/ )
  { 
    return { https::Do(_info_, "put", "/player-notifications/v1/config?", { 
    }, { 
    },config) };
  }
} 