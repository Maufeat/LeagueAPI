#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashBracket.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolClashBracket> GetLolClashV1TournamentByTournamentIdBracketByBracketId (const https::Info& _info_,
      const int64_t& tournamentId /**/,
      const int64_t& bracketId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/bracket/"+to_string(bracketId)+"?", { 
    }, { 
    },"") };
  }
} 