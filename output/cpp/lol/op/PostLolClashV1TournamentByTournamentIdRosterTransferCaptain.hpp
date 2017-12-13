#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolClashV1TournamentByTournamentIdRosterTransferCaptain(const LeagueClient& _client, const int64_t& tournamentId, const uint64_t& newCaptainSummonerId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/transfer-captain?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(newCaptainSummonerId).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}