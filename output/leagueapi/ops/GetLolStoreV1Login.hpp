#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolStoreV1Login (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-store/v1/login?", { 
    }, { 
    },"") };
  }
} 