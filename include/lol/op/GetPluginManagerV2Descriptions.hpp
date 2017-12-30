#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PluginDescriptionResource.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<PluginDescriptionResource>> GetPluginManagerV2Descriptions(T& _client)
  {
    try {
      return ToResult<std::vector<PluginDescriptionResource>>(_client.https.request("get", "/plugin-manager/v2/descriptions?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<PluginDescriptionResource>>(e.code());
    }
  }
  template<typename T>
  inline void GetPluginManagerV2Descriptions(T& _client, std::function<void(T&, const Result<std::vector<PluginDescriptionResource>>&)> cb)
  {
    _client.httpsa.request("get", "/plugin-manager/v2/descriptions?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<PluginDescriptionResource>>(e));
            else
              cb(_client, ToResult<std::vector<PluginDescriptionResource>>(response));
        });
  }
}