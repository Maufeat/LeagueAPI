#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashRoster.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolClashRoster>> GetLolClashV1TournamentByTournamentIdInvitations (const https::Info& _info_,
      const int64_t& tournamentId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/invitations?", { 
    }, { 
    }) };
  }
} 