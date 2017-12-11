#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<std::string>> GetLolLootV1PlayerDisplayCategories (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-loot/v1/player-display-categories?", { 
    }, { 
    }) };
  }
} 