#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolAcsV1GamesByGameId (const https::Info& _info_,
      const uint64_t& gameId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-acs/v1/games/"+to_string(gameId)+"?", { 
    }, { 
    }) };
  }
} 