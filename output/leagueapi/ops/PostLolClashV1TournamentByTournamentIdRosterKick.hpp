#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashKickRequest.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolClashV1TournamentByTournamentIdRosterKick (const https::Info& _info_,
      const int64_t& tournamentId /**/,
      const LolClashKickRequest& kickRequest /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/kick?", { 
    }, { 
    },kickRequest) };
  }
} 