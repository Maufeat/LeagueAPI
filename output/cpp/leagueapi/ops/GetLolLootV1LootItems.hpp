#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLootLootItem.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLootLootItem>> GetLolLootV1LootItems (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-loot/v1/loot-items?", { 
    }, { 
    }) };
  }
} 