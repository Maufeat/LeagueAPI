#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::string> GetLolMatchHistoryV1WebUrl (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-match-history/v1/web-url?", { 
    }, { 
    },"") };
  }
} 