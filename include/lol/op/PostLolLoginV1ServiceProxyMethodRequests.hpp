#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<Nothing> PostLolLoginV1ServiceProxyMethodRequests(T& _client, const std::string& serviceName, const std::string& methodName, const std::string& responseMethodName, const std::string& responseErrorName, const uint32_t& pluginId, const std::string& payload)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/lol-login/v1/service-proxy-method-requests?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "serviceName", to_string(serviceName) },
          { "methodName", to_string(methodName) },
          { "responseMethodName", to_string(responseMethodName) },
          { "responseErrorName", to_string(responseErrorName) },
          { "pluginId", to_string(pluginId) },
          { "payload", to_string(payload) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PostLolLoginV1ServiceProxyMethodRequests(T& _client, const std::string& serviceName, const std::string& methodName, const std::string& responseMethodName, const std::string& responseErrorName, const uint32_t& pluginId, const std::string& payload, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/lol-login/v1/service-proxy-method-requests?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "serviceName", to_string(serviceName) },
          { "methodName", to_string(methodName) },
          { "responseMethodName", to_string(responseMethodName) },
          { "responseErrorName", to_string(responseErrorName) },
          { "pluginId", to_string(pluginId) },
          { "payload", to_string(payload) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}