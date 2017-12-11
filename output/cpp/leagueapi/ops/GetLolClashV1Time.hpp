#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<int64_t> GetLolClashV1Time (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/time?", { 
    }, { 
    }) };
  }
} 