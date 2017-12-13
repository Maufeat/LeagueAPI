#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> GetLolSummonerV1CurrentSummonerSummonerProfile(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-summoner/v1/current-summoner/summoner-profile?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}