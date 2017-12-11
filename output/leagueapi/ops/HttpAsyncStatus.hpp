#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Retrieves details on the current state of an asynchronous operation.*/
  static https::Result<json> HttpAsyncStatus (const https::Info& _info_,
      const uint32_t& asyncToken /*ID of the asynchronous operation to check*/ )
  { 
    return { https::Do(_info_, "get", "/async/v1/status/"+to_string(asyncToken)+"?", { 
    }, { 
    },"") };
  }
} 