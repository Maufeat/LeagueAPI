#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolMatchHistoryMatchHistoryList.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolMatchHistoryMatchHistoryList> GetLolMatchHistoryV1Matchlist (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-match-history/v1/matchlist?", { 
    }, { 
    }) };
  }
} 