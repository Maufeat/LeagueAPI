#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLootPlayerLootNotification.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLootPlayerLootNotification>> GetLolLootV1PlayerLootNotifications (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-loot/v1/player-loot-notifications?", { 
    }, { 
    }) };
  }
} 