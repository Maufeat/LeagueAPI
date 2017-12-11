#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolLootV1PlayerLootByLootIdNewNotification (const https::Info& _info_,
      const std::string& lootId /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-loot/v1/player-loot/"+to_string(lootId)+"/new-notification?", { 
    }, { 
    },"") };
  }
} 