#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSummonerSummonerRerollPoints.hpp>
namespace lol {
  Result<LolSummonerSummonerRerollPoints> GetLolSummonerV1CurrentSummonerRerollPoints(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolSummonerSummonerRerollPoints> {
        _client_.request("get", "/lol-summoner/v1/current-summoner/rerollPoints?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolSummonerSummonerRerollPoints> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}