#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolAcsV1Delta (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-acs/v1/delta?", { 
    }, { 
    }) };
  }
} 