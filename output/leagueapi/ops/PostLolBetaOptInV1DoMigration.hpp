#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolBetaOptInV1DoMigration (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-beta-opt-in/v1/do-migration?", { 
    }, { 
    },"") };
  }
} 