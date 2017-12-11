#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/KickoutMessage.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<KickoutMessage> GetLolKickoutV1Notification (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-kickout/v1/notification?", { 
    }, { 
    }) };
  }
} 