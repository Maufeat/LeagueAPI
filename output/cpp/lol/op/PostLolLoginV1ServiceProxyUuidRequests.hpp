#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<std::string> PostLolLoginV1ServiceProxyUuidRequests(const LeagueClient& _client, const std::string& serviceName, const std::string& methodName, const uint32_t& pluginId, const std::string& payload)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::string> {
        _client_.request("post", "/lol-login/v1/service-proxy-uuid-requests?" +
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
      return Result<std::string> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}