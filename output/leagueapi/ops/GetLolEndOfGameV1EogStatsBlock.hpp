#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolEndOfGameEndOfGameStats.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolEndOfGameEndOfGameStats> GetLolEndOfGameV1EogStatsBlock (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-end-of-game/v1/eog-stats-block?", { 
    }, { 
    },"") };
  }
} 