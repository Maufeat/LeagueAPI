#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSummonerSummonerRequestedName.hpp"
#include "../def/LolSummonerInternalSummoner.hpp"
namespace lol {
  template<typename T>
  inline Result<LolSummonerInternalSummoner> PostLolSummonerV1Summoners(T& _client, const LolSummonerSummonerRequestedName& name)
  {
    try {
      return ToResult<LolSummonerInternalSummoner>(_client.https.request("post", "/lol-summoner/v1/summoners?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(name).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolSummonerInternalSummoner>(e.code());
    }
  }
  template<typename T>
  inline void PostLolSummonerV1Summoners(T& _client, const LolSummonerSummonerRequestedName& name, std::function<void(T&, const Result<LolSummonerInternalSummoner>&)> cb)
  {
    _client.httpsa.request("post", "/lol-summoner/v1/summoners?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(name).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolSummonerInternalSummoner>(e));
            else
              cb(_client, ToResult<LolSummonerInternalSummoner>(response));
        });
  }
}