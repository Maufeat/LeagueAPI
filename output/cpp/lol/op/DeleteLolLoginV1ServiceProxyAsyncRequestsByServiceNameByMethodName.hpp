#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> DeleteLolLoginV1ServiceProxyAsyncRequestsByServiceNameByMethodName(const LeagueClient& _client, const std::string& serviceName, const std::string& methodName, const uint32_t& pluginId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/lol-login/v1/service-proxy-async-requests/"+to_string(serviceName)+"/"+to_string(methodName)+"?" + SimpleWeb::QueryString::create(Args2Headers({ { "pluginId", to_string(pluginId) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}