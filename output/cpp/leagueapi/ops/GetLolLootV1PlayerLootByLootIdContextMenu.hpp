#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLootContextMenu.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLootContextMenu>> GetLolLootV1PlayerLootByLootIdContextMenu (const https::Info& _info_,
      const std::string& lootId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-loot/v1/player-loot/"+to_string(lootId)+"/context-menu?", { 
    }, { 
    }) };
  }
} 