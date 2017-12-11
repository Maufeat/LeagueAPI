#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeletePlayerNotificationsV1NotificationsById (const https::Info& _info_,
      const uint64_t& id /**/ )
  { 
    return { https::Do(_info_, "delete", "/player-notifications/v1/notifications/"+to_string(id)+"?", { 
    }, { 
    }) };
  }
} 