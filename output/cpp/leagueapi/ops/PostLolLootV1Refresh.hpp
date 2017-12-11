#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::string> PostLolLootV1Refresh (const https::Info& _info_,
      const bool& force /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-loot/v1/refresh?", { 
      { "force", to_string(force) },
    }, { 
    }) };
  }
} 