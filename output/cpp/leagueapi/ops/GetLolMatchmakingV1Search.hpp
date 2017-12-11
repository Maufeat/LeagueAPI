#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolMatchmakingMatchmakingSearchResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolMatchmakingMatchmakingSearchResource> GetLolMatchmakingV1Search (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-matchmaking/v1/search?", { 
    }, { 
    }) };
  }
} 