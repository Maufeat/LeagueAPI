#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Attempts to cancel an asynchronous operation*/
  static https::Result<json> Cancel (const https::Info& _info_,
      const uint32_t& asyncToken /*Operation to cancel*/ )
  { 
    return { https::Do(_info_, "post", "/Cancel?", { 
      { "asyncToken", https::to_string(asyncToken) },
    }, { 
    },"") };
  }
} 