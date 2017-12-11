#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/BuildInfo.hpp>

namespace leagueapi::op {
  /*Information about the current artifacts that make up this build*/
  static https::Result<BuildInfo> GetSystemV1Builds (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/system/v1/builds?", { 
    }, { 
    }) };
  }
} 