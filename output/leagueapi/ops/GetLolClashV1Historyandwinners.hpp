#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashTournamentHistoryAndWinners.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolClashTournamentHistoryAndWinners> GetLolClashV1Historyandwinners (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/historyandwinners?", { 
    }, { 
    },"") };
  }
} 