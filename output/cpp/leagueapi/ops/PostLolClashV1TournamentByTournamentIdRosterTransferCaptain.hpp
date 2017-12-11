#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolClashV1TournamentByTournamentIdRosterTransferCaptain (const https::Info& _info_,
      const int64_t& tournamentId /**/,
      const uint64_t& newCaptainSummonerId /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/transfer-captain?", { 
    }, { 
    },newCaptainSummonerId) };
  }
} 