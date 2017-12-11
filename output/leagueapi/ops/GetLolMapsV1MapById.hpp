#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolMapsMaps.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolMapsMaps> GetLolMapsV1MapById (const https::Info& _info_,
      const int64_t& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-maps/v1/map/"+to_string(id)+"?", { 
    }, { 
    },"") };
  }
} 