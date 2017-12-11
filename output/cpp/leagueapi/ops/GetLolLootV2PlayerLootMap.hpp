#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLootPlayerLootMap.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLootPlayerLootMap> GetLolLootV2PlayerLootMap (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-loot/v2/player-loot-map?", { 
    }, { 
    }) };
  }
} 