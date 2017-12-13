#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashSetTicketRequest.hpp>
namespace lol {
  Result<json> PostLolClashV1TournamentByTournamentIdRosterSetBid(const LeagueClient& _client, const int64_t& tournamentId, const LolClashSetTicketRequest& setTicketRequest)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/set-bid?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(setTicketRequest).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}