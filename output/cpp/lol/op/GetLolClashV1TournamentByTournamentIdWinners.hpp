#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashTournamentWinnerHistory.hpp>
namespace lol {
  Result<LolClashTournamentWinnerHistory> GetLolClashV1TournamentByTournamentIdWinners(const LeagueClient& _client, const int64_t& tournamentId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/winners?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}