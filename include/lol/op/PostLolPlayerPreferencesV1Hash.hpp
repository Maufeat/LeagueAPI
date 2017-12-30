#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<std::string> PostLolPlayerPreferencesV1Hash(T& _client, const std::string& preferences)
  {
    try {
      return ToResult<std::string>(_client.https.request("post", "/lol-player-preferences/v1/hash?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(preferences).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::string>(e.code());
    }
  }
  template<typename T>
  inline void PostLolPlayerPreferencesV1Hash(T& _client, const std::string& preferences, std::function<void(T&, const Result<std::string>&)> cb)
  {
    _client.httpsa.request("post", "/lol-player-preferences/v1/hash?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(preferences).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::string>(e));
            else
              cb(_client, ToResult<std::string>(response));
        });
  }
}