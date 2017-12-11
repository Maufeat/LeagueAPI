#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/FailedInvite.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<FailedInvite>> PostLolClashV1TournamentByTournamentIdRosterInvite (const https::Info& _info_,
      const int64_t& tournamentId /**/,
      const std::vector<uint64_t>& summonerIds /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/invite?", { 
    }, { 
    },summonerIds) };
  }
} 