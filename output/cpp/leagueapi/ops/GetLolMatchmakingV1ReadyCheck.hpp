#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolMatchmakingMatchmakingReadyCheckResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolMatchmakingMatchmakingReadyCheckResource> GetLolMatchmakingV1ReadyCheck (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-matchmaking/v1/ready-check?", { 
    }, { 
    }) };
  }
} 