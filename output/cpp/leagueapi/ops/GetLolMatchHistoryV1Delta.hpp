#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolMatchHistoryMatchHistoryPlayerDelta.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolMatchHistoryMatchHistoryPlayerDelta> GetLolMatchHistoryV1Delta (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-match-history/v1/delta?", { 
    }, { 
    }) };
  }
} 