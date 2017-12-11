#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolClashV1Iconconfig (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/iconconfig?", { 
    }, { 
    },"") };
  }
} 