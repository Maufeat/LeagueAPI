#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Cancels the asynchronous operation or removes its completion status.*/
  static https::Result<json> AsyncDelete (const https::Info& _info_,
      const uint32_t& asyncToken /*ID of the asynchronous operation to remove*/ )
  { 
    return { https::Do(_info_, "post", "/AsyncDelete?", { 
      { "asyncToken", https::to_string(asyncToken) },
    }, { 
    },"") };
  }
} 