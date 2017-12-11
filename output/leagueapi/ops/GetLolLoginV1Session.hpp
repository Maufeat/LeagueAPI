#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLoginLoginSession.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLoginLoginSession> GetLolLoginV1Session (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-login/v1/session?", { 
    }, { 
    },"") };
  }
} 