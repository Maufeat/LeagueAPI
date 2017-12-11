#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<bool> GetLolBetaOptInV1NeedsMigration (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-beta-opt-in/v1/needs-migration?", { 
    }, { 
    },"") };
  }
} 