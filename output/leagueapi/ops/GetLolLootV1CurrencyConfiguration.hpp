#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> GetLolLootV1CurrencyConfiguration (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-loot/v1/currency-configuration?", { 
    }, { 
    },"") };
  }
} 