#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<json> GetLolPlayerPreferencesV1PreferenceByType(T& _client, const std::string& type, const std::optional<std::string>& hash = std::nullopt)
  {
    try {
      return ToResult<json>(_client.https.request("get", "/lol-player-preferences/v1/preference/"+to_string(type)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "hash", to_string(hash) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void GetLolPlayerPreferencesV1PreferenceByType(T& _client, const std::string& type, const std::optional<std::string>& hash = std::nullopt, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("get", "/lol-player-preferences/v1/preference/"+to_string(type)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "hash", to_string(hash) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}