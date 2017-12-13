#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashTournamentStateInfo.hpp>
namespace lol {
  Result<std::vector<LolClashTournamentStateInfo>> GetLolClashV1TournamentStateInfo(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-clash/v1/tournament-state-info?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}