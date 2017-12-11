#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LeaverBusterNotificationResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LeaverBusterNotificationResource>> GetLolLeaverBusterV1Notifications (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-leaver-buster/v1/notifications?", { 
    }, { 
    },"") };
  }
} 