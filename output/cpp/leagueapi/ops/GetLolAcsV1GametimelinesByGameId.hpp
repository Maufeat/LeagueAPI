#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolAcsV1GametimelinesByGameId (const https::Info& _info_,
      const uint64_t& gameId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-acs/v1/gametimelines/"+to_string(gameId)+"?", { 
    }, { 
    }) };
  }
} 