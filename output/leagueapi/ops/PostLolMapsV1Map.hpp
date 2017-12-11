#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolMapsMaps.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolMapsV1Map (const https::Info& _info_,
      const LolMapsMaps& map /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-maps/v1/map?", { 
    }, { 
    },map) };
  }
} 