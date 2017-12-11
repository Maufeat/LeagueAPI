#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolClashV1TournamentByTournamentIdRosterByRosterIdDecline (const https::Info& _info_,
      const int64_t& tournamentId /**/,
      const std::string& rosterId /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/"+to_string(rosterId)+"/decline?", { 
    }, { 
    }) };
  }
} 