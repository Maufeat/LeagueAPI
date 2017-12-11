#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Cancels the asynchronous operation or removes its completion status.*/
  static https::Result<json> HttpAsyncDelete (const https::Info& _info_,
      const uint32_t& asyncToken /*ID of the asynchronous operation to remove*/ )
  { 
    return { https::Do(_info_, "delete", "/async/v1/status/"+to_string(asyncToken)+"?", { 
    }, { 
    }) };
  }
} 