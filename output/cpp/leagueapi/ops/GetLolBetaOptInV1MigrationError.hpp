#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::string> GetLolBetaOptInV1MigrationError (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-beta-opt-in/v1/migration-error?", { 
    }, { 
    }) };
  }
} 