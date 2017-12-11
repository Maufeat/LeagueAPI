#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolMapsMaps.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolMapsMaps>> GetLolMapsV2Maps (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-maps/v2/maps?", { 
    }, { 
    },"") };
  }
} 