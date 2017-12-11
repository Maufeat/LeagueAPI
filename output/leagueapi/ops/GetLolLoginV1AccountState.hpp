#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLoginAccountStateResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLoginAccountStateResource> GetLolLoginV1AccountState (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-login/v1/account-state?", { 
    }, { 
    },"") };
  }
} 