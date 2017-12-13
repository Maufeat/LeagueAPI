#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> GetLolSummonerV1SummonerProfile(const LeagueClient& _client, const std::string& puuid)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-summoner/v1/summoner-profile?" + SimpleWeb::QueryString::create(Args2Headers({ { "puuid", to_string(puuid) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}