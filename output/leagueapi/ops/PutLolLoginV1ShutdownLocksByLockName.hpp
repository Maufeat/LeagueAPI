#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PutLolLoginV1ShutdownLocksByLockName (const https::Info& _info_,
      const std::string& lockName /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-login/v1/shutdown-locks/"+to_string(lockName)+"?", { 
    }, { 
    },"") };
  }
} 