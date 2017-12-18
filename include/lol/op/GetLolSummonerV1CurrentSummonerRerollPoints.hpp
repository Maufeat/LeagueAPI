#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSummonerSummonerRerollPoints.hpp"
namespace lol {
  inline Result<LolSummonerSummonerRerollPoints> GetLolSummonerV1CurrentSummonerRerollPoints(LeagueClient& _client)
  {
    try {
      return ToResult<LolSummonerSummonerRerollPoints>(_client.https.request("get", "/lol-summoner/v1/current-summoner/rerollPoints?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolSummonerSummonerRerollPoints>(e.code());
    }
  }
  inline void GetLolSummonerV1CurrentSummonerRerollPoints(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolSummonerSummonerRerollPoints>&)> cb)
  {
    _client.httpsa.request("get", "/lol-summoner/v1/current-summoner/rerollPoints?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolSummonerSummonerRerollPoints>(e));
            else
              cb(_client, ToResult<LolSummonerSummonerRerollPoints>(response));
        });
  }
}