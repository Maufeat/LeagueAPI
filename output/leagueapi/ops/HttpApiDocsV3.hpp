#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Retrieves the API documentation*/
  static https::Result<json> HttpApiDocsV3 (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/v3/openapi.json?", { 
    }, { 
    },"") };
  }
} 