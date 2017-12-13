#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashTournamentSummary.hpp>
namespace lol {
  Result<std::vector<LolClashTournamentSummary>> GetLolClashV1TournamentSummary(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-clash/v1/tournament-summary?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}