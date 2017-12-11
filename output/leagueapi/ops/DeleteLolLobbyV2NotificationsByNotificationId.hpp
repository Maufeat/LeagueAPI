#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolLobbyV2NotificationsByNotificationId (const https::Info& _info_,
      const std::string& notificationId /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-lobby/v2/notifications/"+to_string(notificationId)+"?", { 
    }, { 
    },"") };
  }
} 