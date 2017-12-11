#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolStoreV1NotificationsAcknowledge (const https::Info& _info_,
      const std::string& id /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-store/v1/notifications/acknowledge?", { 
    }, { 
    },id) };
  }
} 