#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLeaguesV2NotificationsByIdAcknowledge (const https::Info& _info_,
      const uint64_t& id /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-leagues/v2/notifications/"+to_string(id)+"/acknowledge?", { 
    }, { 
    }) };
  }
} 