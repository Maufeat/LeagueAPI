#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Returns the various performance information for the cef processes*/
  static https::Result<json> GetPerformanceV1Report (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/performance/v1/report?", { 
    }, { 
    }) };
  }
} 