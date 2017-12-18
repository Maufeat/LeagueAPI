#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<void> PostLolLoginV1ServiceProxyMethodRequests(LeagueClient& _client, const std::string& serviceName, const std::string& methodName, const std::string& responseMethodName, const std::string& responseErrorName, const uint32_t& pluginId, const std::string& payload)
  {
    try {
      return Result<void> {
        _client.https.request("post", "/lol-login/v1/service-proxy-method-requests?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "serviceName", to_string(serviceName) },
           { "methodName", to_string(methodName) },
           { "responseMethodName", to_string(responseMethodName) },
           { "responseErrorName", to_string(responseErrorName) },
           { "pluginId", to_string(pluginId) },
           { "payload", to_string(payload) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolLoginV1ServiceProxyMethodRequests(LeagueClient& _client, const std::string& serviceName, const std::string& methodName, const std::string& responseMethodName, const std::string& responseErrorName, const uint32_t& pluginId, const std::string& payload, std::function<void(LeagueClient&,const Result<void>&)> cb)
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
          if(!e)
            cb(_client, Result<void> { response });
          else
            cb(_client,Result<void> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}