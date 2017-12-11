#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashRoster.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolClashRoster> GetLolClashV1TournamentByTournamentIdRosterByRosterId (const https::Info& _info_,
      const int64_t& tournamentId /**/,
      const std::string& rosterId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/"+to_string(rosterId)+"?", { 
    }, { 
    }) };
  }
} 