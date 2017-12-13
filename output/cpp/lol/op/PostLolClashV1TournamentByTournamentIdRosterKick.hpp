#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashKickRequest.hpp>
namespace lol {
  Result<json> PostLolClashV1TournamentByTournamentIdRosterKick(const LeagueClient& _client, const int64_t& tournamentId, const LolClashKickRequest& kickRequest)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/kick?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(kickRequest).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}