#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLootPlayerLoot.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLootPlayerLoot> GetLolLootV1PlayerLootByLootId (const https::Info& _info_,
      const std::string& lootId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-loot/v1/player-loot/"+to_string(lootId)+"?", { 
    }, { 
    },"") };
  }
} 