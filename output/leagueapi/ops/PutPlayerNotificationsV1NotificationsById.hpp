#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerNotificationResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PlayerNotificationResource> PutPlayerNotificationsV1NotificationsById (const https::Info& _info_,
      const uint64_t& id /**/,
      const json& notification /**/ )
  { 
    return { https::Do(_info_, "put", "/player-notifications/v1/notifications/"+to_string(id)+"?", { 
    }, { 
    },notification) };
  }
} 