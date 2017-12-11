#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Retrieves the API documentation*/
  static https::Result<json> HttpApiDocsV2 (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/v2/swagger.json?", { 
    }, { 
    },"") };
  }
} 