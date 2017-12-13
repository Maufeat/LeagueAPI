#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSummonerSummoner.hpp>
namespace lol {
  Result<LolSummonerSummoner> GetLolSummonerV1Summoners(const LeagueClient& _client, const std::string& name)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-summoner/v1/summoners?" + SimpleWeb::QueryString::create(Args2Headers({ { "name", to_string(name) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}