#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSummonerSummoner.hpp"
namespace lol {
  template<typename T>
  inline Result<LolSummonerSummoner> PostLolSummonerV1CurrentSummonerXpInfo(T& _client)
  {
    try {
      return ToResult<LolSummonerSummoner>(_client.https.request("post", "/lol-summoner/v1/current-summoner/xpInfo?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolSummonerSummoner>(e.code());
    }
  }
  template<typename T>
  inline void PostLolSummonerV1CurrentSummonerXpInfo(T& _client, std::function<void(T&, const Result<LolSummonerSummoner>&)> cb)
  {
    _client.httpsa.request("post", "/lol-summoner/v1/current-summoner/xpInfo?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolSummonerSummoner>(e));
            else
              cb(_client, ToResult<LolSummonerSummoner>(response));
        });
  }
}