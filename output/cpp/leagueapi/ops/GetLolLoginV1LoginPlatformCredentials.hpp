#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLoginPlatformGeneratedCredentials.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLoginPlatformGeneratedCredentials> GetLolLoginV1LoginPlatformCredentials (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-login/v1/login-platform-credentials?", { 
    }, { 
    }) };
  }
} 