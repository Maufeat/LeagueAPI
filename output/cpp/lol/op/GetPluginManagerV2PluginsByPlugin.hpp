#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PluginResource.hpp"
namespace lol {
  inline Result<PluginResource> GetPluginManagerV2PluginsByPlugin(LeagueClient& _client, const std::string& plugin)
  {
    try {
      return Result<PluginResource> {
        _client.https.request("get", "/plugin-manager/v2/plugins/"+to_string(plugin)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PluginResource> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetPluginManagerV2PluginsByPlugin(LeagueClient& _client, const std::string& plugin, std::function<void(LeagueClient&,const Result<PluginResource>&)> cb)
  {
    _client.httpsa.request("get", "/plugin-manager/v2/plugins/"+to_string(plugin)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<PluginResource> { response });
          else
            cb(_client,Result<PluginResource> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}