#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Returns all metrics*/
  static https::Result<json> LoggingMetrics (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/LoggingMetrics?", { 
    }, { 
    },"") };
  }
} 