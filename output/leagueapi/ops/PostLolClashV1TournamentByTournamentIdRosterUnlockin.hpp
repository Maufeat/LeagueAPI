#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolClashV1TournamentByTournamentIdRosterUnlockin (const https::Info& _info_,
      const int64_t& tournamentId /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/unlockin?", { 
    }, { 
    },"") };
  }
} 