#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::nullptr_t> PostLolLoginV1ServiceProxyAsyncRequestsByServiceNameByMethodName(LeagueClient& _client, const std::string& serviceName, const std::string& methodName, const uint32_t& pluginId)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/lol-login/v1/service-proxy-async-requests/"+to_string(serviceName)+"/"+to_string(methodName)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "pluginId", to_string(pluginId) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostLolLoginV1ServiceProxyAsyncRequestsByServiceNameByMethodName(LeagueClient& _client, const std::string& serviceName, const std::string& methodName, const uint32_t& pluginId, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("post", "/lol-login/v1/service-proxy-async-requests/"+to_string(serviceName)+"/"+to_string(methodName)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "pluginId", to_string(pluginId) }, })), 
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