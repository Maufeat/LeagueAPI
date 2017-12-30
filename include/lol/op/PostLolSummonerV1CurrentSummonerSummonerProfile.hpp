#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSummonerSummonerProfileUpdate.hpp"
namespace lol {
  template<typename T>
  inline Result<json> PostLolSummonerV1CurrentSummonerSummonerProfile(T& _client, const LolSummonerSummonerProfileUpdate& body)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/lol-summoner/v1/current-summoner/summoner-profile?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(body).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void PostLolSummonerV1CurrentSummonerSummonerProfile(T& _client, const LolSummonerSummonerProfileUpdate& body, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-summoner/v1/current-summoner/summoner-profile?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(body).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}