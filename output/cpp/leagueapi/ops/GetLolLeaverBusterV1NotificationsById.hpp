#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LeaverBusterNotificationResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LeaverBusterNotificationResource> GetLolLeaverBusterV1NotificationsById (const https::Info& _info_,
      const uint32_t& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-leaver-buster/v1/notifications/"+to_string(id)+"?", { 
    }, { 
    }) };
  }
} 