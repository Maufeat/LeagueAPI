#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<std::string> PostLolLoginV1ServiceProxyUuidRequests(const LeagueClient& _client, const std::string& serviceName, const std::string& methodName, const uint32_t& pluginId, const std::string& payload)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-login/v1/service-proxy-uuid-requests?" + SimpleWeb::QueryString::create(Args2Headers({ { "serviceName", to_string(serviceName) },
    { "methodName", to_string(methodName) },
    { "pluginId", to_string(pluginId) },
    { "payload", to_string(payload) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}