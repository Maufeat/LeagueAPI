#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashInviteSubRequest.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolClashV1TournamentByTournamentIdRosterSubstituteInvite (const https::Info& _info_,
      const int64_t& tournamentId /**/,
      const LolClashInviteSubRequest& inviteSubRequest /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/substitute/invite?", { 
    }, { 
    },inviteSubRequest) };
  }
} 