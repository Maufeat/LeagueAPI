#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<int32_t>> GetLolPerksV1PerksDisabled (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-perks/v1/perks/disabled?", { 
    }, { 
    },"") };
  }
} 