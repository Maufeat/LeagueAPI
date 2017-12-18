#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::string> PostLolLoginV1ServiceProxyUuidRequests(LeagueClient& _client, const std::string& serviceName, const std::string& methodName, const uint32_t& pluginId, const std::string& payload)
  {
    try {
      return Result<std::string> {
        _client.https.request("post", "/lol-login/v1/service-proxy-uuid-requests?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "serviceName", to_string(serviceName) },
           { "methodName", to_string(methodName) },
           { "pluginId", to_string(pluginId) },
           { "payload", to_string(payload) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::string> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolLoginV1ServiceProxyUuidRequests(LeagueClient& _client, const std::string& serviceName, const std::string& methodName, const uint32_t& pluginId, const std::string& payload, std::function<void(LeagueClient&,const Result<std::string>&)> cb)
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
          if(!e)
            cb(_client, Result<std::string> { response });
          else
            cb(_client,Result<std::string> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}