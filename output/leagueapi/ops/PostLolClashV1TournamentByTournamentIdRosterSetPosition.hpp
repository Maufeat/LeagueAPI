#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashSetPositionRequest.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolClashV1TournamentByTournamentIdRosterSetPosition (const https::Info& _info_,
      const int64_t& tournamentId /**/,
      const LolClashSetPositionRequest& setPositionRequest /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/set-position?", { 
    }, { 
    },setPositionRequest) };
  }
} 