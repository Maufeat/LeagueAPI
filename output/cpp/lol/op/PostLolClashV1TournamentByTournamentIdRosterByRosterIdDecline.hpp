#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolClashV1TournamentByTournamentIdRosterByRosterIdDecline(const LeagueClient& _client, const int64_t& tournamentId, const std::string& rosterId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/"+to_string(rosterId)+"/decline?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}