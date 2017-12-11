#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PutLolBetaOptInV1MigrationError (const https::Info& _info_,
      const std::string& errString /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-beta-opt-in/v1/migration-error?", { 
      { "errString", https::to_string(errString) },
    }, { 
    },"") };
  }
} 