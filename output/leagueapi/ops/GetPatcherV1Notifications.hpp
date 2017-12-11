#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PatcherNotification.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<PatcherNotification>> GetPatcherV1Notifications (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/patcher/v1/notifications?", { 
    }, { 
    },"") };
  }
} 