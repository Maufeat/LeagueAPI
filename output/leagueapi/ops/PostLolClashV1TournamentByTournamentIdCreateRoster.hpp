#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashRosterDetails.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolClashV1TournamentByTournamentIdCreateRoster (const https::Info& _info_,
      const int64_t& tournamentId /**/,
      const LolClashRosterDetails& rosterDetails /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/create-roster?", { 
    }, { 
    },rosterDetails) };
  }
} 