#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashTournamentStateInfo.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolClashTournamentStateInfo> GetLolClashV1TournamentByTournamentIdStateInfo (const https::Info& _info_,
      const int64_t& tournamentId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/stateInfo?", { 
    }, { 
    }) };
  }
} 