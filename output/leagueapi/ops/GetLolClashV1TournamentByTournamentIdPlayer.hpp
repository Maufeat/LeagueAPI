#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashPlayerTournamentData.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolClashPlayerTournamentData> GetLolClashV1TournamentByTournamentIdPlayer (const https::Info& _info_,
      const int64_t& tournamentId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/player?", { 
    }, { 
    },"") };
  }
} 