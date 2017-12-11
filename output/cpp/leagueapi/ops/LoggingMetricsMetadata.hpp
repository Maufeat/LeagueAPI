#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Returns metadata for all metrics*/
  static https::Result<json> LoggingMetricsMetadata (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/LoggingMetricsMetadata?", { 
    }, { 
    }) };
  }
} 