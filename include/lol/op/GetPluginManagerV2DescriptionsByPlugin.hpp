#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PluginDescriptionResource.hpp"
namespace lol {
  inline Result<PluginDescriptionResource> GetPluginManagerV2DescriptionsByPlugin(LeagueClient& _client, const std::string& plugin)
  {
    try {
      return ToResult<PluginDescriptionResource>(_client.https.request("get", "/plugin-manager/v2/descriptions/"+to_string(plugin)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PluginDescriptionResource>(e.code());
    }
  }
  inline void GetPluginManagerV2DescriptionsByPlugin(LeagueClient& _client, const std::string& plugin, std::function<void(LeagueClient&, const Result<PluginDescriptionResource>&)> cb)
  {
    _client.httpsa.request("get", "/plugin-manager/v2/descriptions/"+to_string(plugin)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PluginDescriptionResource>(e));
            else
              cb(_client, ToResult<PluginDescriptionResource>(response));
        });
  }
}