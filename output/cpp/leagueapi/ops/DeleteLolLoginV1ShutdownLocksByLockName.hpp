#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> DeleteLolLoginV1ShutdownLocksByLockName (const https::Info& _info_,
      const std::string& lockName /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-login/v1/shutdown-locks/"+to_string(lockName)+"?", { 
    }, { 
    }) };
  }
} 