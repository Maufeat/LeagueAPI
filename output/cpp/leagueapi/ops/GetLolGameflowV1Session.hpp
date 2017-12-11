#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolGameflowGameflowSession.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolGameflowGameflowSession> GetLolGameflowV1Session (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-gameflow/v1/session?", { 
    }, { 
    }) };
  }
} 