#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerNotificationResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PlayerNotificationResource> GetPlayerNotificationsV1NotificationsById (const https::Info& _info_,
      const uint64_t& id /**/ )
  { 
    return { https::Do(_info_, "get", "/player-notifications/v1/notifications/"+to_string(id)+"?", { 
    }, { 
    }) };
  }
} 