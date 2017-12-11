#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::string> GetPatcherV1ExecutableVersion (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/patcher/v1/executable-version?", { 
    }, { 
    }) };
  }
} 