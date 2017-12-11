#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashChangeIconRequest.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolClashV1TournamentByTournamentIdRosterChangeIcon (const https::Info& _info_,
      const int64_t& tournamentId /**/,
      const LolClashChangeIconRequest& changeIconRequest /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/change-icon?", { 
    }, { 
    },changeIconRequest) };
  }
} 