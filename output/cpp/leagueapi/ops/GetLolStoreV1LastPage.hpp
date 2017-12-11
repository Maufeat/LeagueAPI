#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::string> GetLolStoreV1LastPage (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-store/v1/lastPage?", { 
    }, { 
    }) };
  }
} 