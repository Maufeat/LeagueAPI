#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<json> PostLolLoginV1ChangeSummonerName(T& _client, const std::string& name)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/lol-login/v1/change-summoner-name?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(name).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void PostLolLoginV1ChangeSummonerName(T& _client, const std::string& name, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-login/v1/change-summoner-name?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(name).dump(),
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