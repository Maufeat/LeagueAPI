#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/ShutdownNotification.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<ShutdownNotification> GetLolShutdownV1Notification (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-shutdown/v1/notification?", { 
    }, { 
    },"") };
  }
} 