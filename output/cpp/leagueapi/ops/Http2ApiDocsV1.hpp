#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Retrieves the API documentation resource listing*/
  static https::Result<json> Http2ApiDocsV1 (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/v1/api-docs?", { 
    }, { 
    }) };
  }
} 