#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::string> PostLolLoginV1ServiceProxyUuidRequests(LeagueClient& _client, const std::string& serviceName, const std::string& methodName, const uint32_t& pluginId, const std::string& payload)
  {
    try {
      return ToResult<std::string>(_client.https.request("post", "/lol-login/v1/service-proxy-uuid-requests?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "serviceName", to_string(serviceName) },
          { "methodName", to_string(methodName) },
          { "pluginId", to_string(pluginId) },
          { "payload", to_string(payload) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::string>(e.code());
    }
  }
  inline void PostLolLoginV1ServiceProxyUuidRequests(LeagueClient& _client, const std::string& serviceName, const std::string& methodName, const uint32_t& pluginId, const std::string& payload, std::function<void(LeagueClient&, const Result<std::string>&)> cb)
  {
    _client.httpsa.request("post", "/lol-login/v1/service-proxy-uuid-requests?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "serviceName", to_string(serviceName) },
          { "methodName", to_string(methodName) },
          { "pluginId", to_string(pluginId) },
          { "payload", to_string(payload) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::string>(e));
            else
              cb(_client, ToResult<std::string>(response));
        });
  }
}