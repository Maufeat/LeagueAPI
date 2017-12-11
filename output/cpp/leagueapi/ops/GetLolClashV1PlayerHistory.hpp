#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashRosterStats.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolClashRosterStats>> GetLolClashV1PlayerHistory (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/player/history?", { 
    }, { 
    }) };
  }
} 