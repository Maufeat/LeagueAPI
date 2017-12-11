#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolPlatformConfigV1Namespaces (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-platform-config/v1/namespaces?", { 
    }, { 
    }) };
  }
} 