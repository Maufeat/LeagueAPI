#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::string> PostLolLootV1PlayerLootNotificationsByIdAcknowledge (const https::Info& _info_,
      const std::string& id /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-loot/v1/player-loot-notifications/"+to_string(id)+"/acknowledge?", { 
    }, { 
    },"") };
  }
} 