#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashSetTicketRequest.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolClashV1TournamentByTournamentIdRosterSetBid (const https::Info& _info_,
      const int64_t& tournamentId /**/,
      const LolClashSetTicketRequest& setTicketRequest /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/set-bid?", { 
    }, { 
    },setTicketRequest) };
  }
} 