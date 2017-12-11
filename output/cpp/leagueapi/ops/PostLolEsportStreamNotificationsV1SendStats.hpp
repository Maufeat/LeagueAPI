#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolEsportStreamNotificationsV1SendStats (const https::Info& _info_,
      const std::string& eventType /**/,
      const std::string& matchId /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-esport-stream-notifications/v1/send-stats?", { 
    }, { 
    }) };
  }
} 