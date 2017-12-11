#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashChangeNameRequest.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolClashV1TournamentByTournamentIdRosterChangeShortName (const https::Info& _info_,
      const int64_t& tournamentId /**/,
      const LolClashChangeNameRequest& changeNameRequest /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/change-short-name?", { 
    }, { 
    },changeNameRequest) };
  }
} 