#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSummonerSummonerRerollPoints.hpp"
namespace lol {
  template<typename T>
  inline Result<LolSummonerSummonerRerollPoints> GetLolSummonerV1CurrentSummonerRerollPoints(T& _client)
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
  template<typename T>
  inline void GetLolSummonerV1CurrentSummonerRerollPoints(T& _client, std::function<void(T&, const Result<LolSummonerSummonerRerollPoints>&)> cb)
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