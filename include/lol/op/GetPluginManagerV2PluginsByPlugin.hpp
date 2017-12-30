#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PluginResource.hpp"
namespace lol {
  template<typename T>
  inline Result<PluginResource> GetPluginManagerV2PluginsByPlugin(T& _client, const std::string& plugin)
  {
    try {
      return ToResult<PluginResource>(_client.https.request("get", "/plugin-manager/v2/plugins/"+to_string(plugin)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PluginResource>(e.code());
    }
  }
  template<typename T>
  inline void GetPluginManagerV2PluginsByPlugin(T& _client, const std::string& plugin, std::function<void(T&, const Result<PluginResource>&)> cb)
  {
    _client.httpsa.request("get", "/plugin-manager/v2/plugins/"+to_string(plugin)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PluginResource>(e));
            else
              cb(_client, ToResult<PluginResource>(response));
        });
  }
}