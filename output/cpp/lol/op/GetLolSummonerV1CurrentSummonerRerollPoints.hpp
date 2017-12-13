#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSummonerSummonerRerollPoints.hpp>
namespace lol {
  Result<LolSummonerSummonerRerollPoints> GetLolSummonerV1CurrentSummonerRerollPoints(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-summoner/v1/current-summoner/rerollPoints?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}