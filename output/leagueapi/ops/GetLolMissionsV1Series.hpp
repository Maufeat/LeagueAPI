#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/SeriesDTO.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<SeriesDTO>> GetLolMissionsV1Series (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-missions/v1/series?", { 
    }, { 
    },"") };
  }
} 