#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLootLootGrantNotification.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLootLootGrantNotification>> GetLolLootV1LootGrants (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-loot/v1/loot-grants?", { 
    }, { 
    },"") };
  }
} 