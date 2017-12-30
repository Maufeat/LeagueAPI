#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<Nothing> DeleteLolLoginV1ServiceProxyAsyncRequestsByServiceNameByMethodName(T& _client, const std::string& serviceName, const std::string& methodName, const uint32_t& pluginId)
  {
    try {
      return ToResult<Nothing>(_client.https.request("delete", "/lol-login/v1/service-proxy-async-requests/"+to_string(serviceName)+"/"+to_string(methodName)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "pluginId", to_string(pluginId) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void DeleteLolLoginV1ServiceProxyAsyncRequestsByServiceNameByMethodName(T& _client, const std::string& serviceName, const std::string& methodName, const uint32_t& pluginId, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("delete", "/lol-login/v1/service-proxy-async-requests/"+to_string(serviceName)+"/"+to_string(methodName)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "pluginId", to_string(pluginId) }, })), 
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