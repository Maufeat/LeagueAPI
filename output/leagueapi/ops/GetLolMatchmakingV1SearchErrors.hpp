#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolMatchmakingMatchmakingSearchErrorResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolMatchmakingMatchmakingSearchErrorResource>> GetLolMatchmakingV1SearchErrors (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-matchmaking/v1/search/errors?", { 
    }, { 
    },"") };
  }
} 