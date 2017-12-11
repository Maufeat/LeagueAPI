#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolMatchHistoryRecentlyPlayedSummoner.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolMatchHistoryRecentlyPlayedSummoner>> GetLolMatchHistoryV1RecentlyPlayedSummoners (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-match-history/v1/recently-played-summoners?", { 
    }, { 
    },"") };
  }
} 