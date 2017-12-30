#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RemotingSerializedFormat.hpp"
namespace lol {
  template<typename T>
  inline Result<json> Subscribe(T& _client, const std::string& eventName, const std::optional<RemotingSerializedFormat>& format = std::nullopt)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/Subscribe?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "eventName", to_string(eventName) },
          { "format", to_string(format) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void Subscribe(T& _client, const std::string& eventName, const std::optional<RemotingSerializedFormat>& format = std::nullopt, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/Subscribe?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "eventName", to_string(eventName) },
          { "format", to_string(format) }, })), 
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