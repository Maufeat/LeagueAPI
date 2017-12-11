#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolLeaverBusterV1NotificationsById (const https::Info& _info_,
      const uint32_t& id /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-leaver-buster/v1/notifications/"+to_string(id)+"?", { 
    }, { 
    },"") };
  }
} 