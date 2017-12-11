#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashTournamentWinnerHistory.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolClashTournamentWinnerHistory> GetLolClashV1TournamentByTournamentIdWinners (const https::Info& _info_,
      const int64_t& tournamentId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/winners?", { 
    }, { 
    }) };
  }
} 