#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::nullptr_t> PostLolLoginV1ServiceProxyMethodRequests(LeagueClient& _client, const std::string& serviceName, const std::string& methodName, const std::string& responseMethodName, const std::string& responseErrorName, const uint32_t& pluginId, const std::string& payload)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/lol-login/v1/service-proxy-method-requests?" +
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
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostLolLoginV1ServiceProxyMethodRequests(LeagueClient& _client, const std::string& serviceName, const std::string& methodName, const std::string& responseMethodName, const std::string& responseErrorName, const uint32_t& pluginId, const std::string& payload, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
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
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}