#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::string> GetLolReplaysV1RoflsPath (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-replays/v1/rofls/path?", { 
    }, { 
    }) };
  }
} 