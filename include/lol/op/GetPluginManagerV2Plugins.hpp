#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PluginResource.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<PluginResource>> GetPluginManagerV2Plugins(T& _client)
  {
    try {
      return ToResult<std::vector<PluginResource>>(_client.https.request("get", "/plugin-manager/v2/plugins?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<PluginResource>>(e.code());
    }
  }
  template<typename T>
  inline void GetPluginManagerV2Plugins(T& _client, std::function<void(T&, const Result<std::vector<PluginResource>>&)> cb)
  {
    _client.httpsa.request("get", "/plugin-manager/v2/plugins?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<PluginResource>>(e));
            else
              cb(_client, ToResult<std::vector<PluginResource>>(response));
        });
  }
}