#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolClashV1Ping (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/ping?", { 
    }, { 
    },"") };
  }
} 