#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashTournamentGameEnd.hpp>
namespace lol {
  Result<LolClashTournamentGameEnd> GetLolClashV1GameEnd(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-clash/v1/gameEnd?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}