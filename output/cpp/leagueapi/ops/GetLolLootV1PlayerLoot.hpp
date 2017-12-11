#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLootPlayerLoot.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLootPlayerLoot>> GetLolLootV1PlayerLoot (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-loot/v1/player-loot?", { 
    }, { 
    }) };
  }
} 