#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerNotificationConfigResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PlayerNotificationConfigResource> GetPlayerNotificationsV1Config (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/player-notifications/v1/config?", { 
    }, { 
    },"") };
  }
} 