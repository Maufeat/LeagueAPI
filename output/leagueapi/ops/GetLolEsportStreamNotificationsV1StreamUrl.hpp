#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::string> GetLolEsportStreamNotificationsV1StreamUrl (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-esport-stream-notifications/v1/stream-url?", { 
    }, { 
    },"") };
  }
} 