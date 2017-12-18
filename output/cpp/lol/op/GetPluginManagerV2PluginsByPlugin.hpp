#pragma once
#include "../base_op.hpp" 
#include "../def/PluginResource.hpp"
namespace lol {
  inline Result<PluginResource> GetPluginManagerV2PluginsByPlugin(const LeagueClient& _client, const std::string& plugin)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PluginResource> {
        _client_.request("get", "/plugin-manager/v2/plugins/"+to_string(plugin)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PluginResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}