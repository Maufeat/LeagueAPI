#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolGameflowGameflowWatchPhase.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolGameflowGameflowWatchPhase> GetLolGameflowV1Watch (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-gameflow/v1/watch?", { 
    }, { 
    },"") };
  }
} 