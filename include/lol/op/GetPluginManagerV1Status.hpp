#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PluginManagerResource.hpp"
namespace lol {
  template<typename T>
  inline Result<PluginManagerResource> GetPluginManagerV1Status(T& _client)
  {
    try {
      return ToResult<PluginManagerResource>(_client.https.request("get", "/plugin-manager/v1/status?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PluginManagerResource>(e.code());
    }
  }
  template<typename T>
  inline void GetPluginManagerV1Status(T& _client, std::function<void(T&, const Result<PluginManagerResource>&)> cb)
  {
    _client.httpsa.request("get", "/plugin-manager/v1/status?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PluginManagerResource>(e));
            else
              cb(_client, ToResult<PluginManagerResource>(response));
        });
  }
}