#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RecofrienderDebugConfig.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RecofrienderDebugConfig> GetRecofrienderV1Debug (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/recofriender/v1/debug?", { 
    }, { 
    }) };
  }
} 