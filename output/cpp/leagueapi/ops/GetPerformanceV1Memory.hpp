#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Returns process memory status*/
  static https::Result<json> GetPerformanceV1Memory (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/performance/v1/memory?", { 
    }, { 
    }) };
  }
} 