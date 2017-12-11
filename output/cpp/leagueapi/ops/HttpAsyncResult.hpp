#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Retrieves the result of a completed asynchronous operation.*/
  static https::Result<json> HttpAsyncResult (const https::Info& _info_,
      const uint32_t& asyncToken /*ID of the asynchronous operation to check*/ )
  { 
    return { https::Do(_info_, "get", "/async/v1/result/"+to_string(asyncToken)+"?", { 
    }, { 
    }) };
  }
} 