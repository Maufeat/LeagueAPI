#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSummonerSummoner.hpp"
#include "../def/LolSummonerSummonerIcon.hpp"
namespace lol {
  template<typename T>
  inline Result<LolSummonerSummoner> PutLolSummonerV1CurrentSummonerIcon(T& _client, const LolSummonerSummonerIcon& body)
  {
    try {
      return ToResult<LolSummonerSummoner>(_client.https.request("put", "/lol-summoner/v1/current-summoner/icon?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(body).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolSummonerSummoner>(e.code());
    }
  }
  template<typename T>
  inline void PutLolSummonerV1CurrentSummonerIcon(T& _client, const LolSummonerSummonerIcon& body, std::function<void(T&, const Result<LolSummonerSummoner>&)> cb)
  {
    _client.httpsa.request("put", "/lol-summoner/v1/current-summoner/icon?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(body).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolSummonerSummoner>(e));
            else
              cb(_client, ToResult<LolSummonerSummoner>(response));
        });
  }
}