#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PatcherNotificationId.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostPatcherV1Notifications (const https::Info& _info_,
      const PatcherNotificationId& notificationId /**/ )
  { 
    return { https::Do(_info_, "post", "/patcher/v1/notifications?", { 
      { "notificationId", https::to_string(notificationId) },
    }, { 
    },"") };
  }
} 