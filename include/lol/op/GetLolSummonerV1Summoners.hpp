#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSummonerSummoner.hpp"
namespace lol {
  template<typename T>
  inline Result<LolSummonerSummoner> GetLolSummonerV1Summoners(T& _client, const std::string& name)
  {
    try {
      return ToResult<LolSummonerSummoner>(_client.https.request("get", "/lol-summoner/v1/summoners?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "name", to_string(name) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolSummonerSummoner>(e.code());
    }
  }
  template<typename T>
  inline void GetLolSummonerV1Summoners(T& _client, const std::string& name, std::function<void(T&, const Result<LolSummonerSummoner>&)> cb)
  {
    _client.httpsa.request("get", "/lol-summoner/v1/summoners?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "name", to_string(name) }, })), 
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