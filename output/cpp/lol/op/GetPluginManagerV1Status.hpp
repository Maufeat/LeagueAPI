#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PluginManagerResource.hpp>
namespace lol {
  Result<PluginManagerResource> GetPluginManagerV1Status(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PluginManagerResource> {
        _client_.request("get", "/plugin-manager/v1/status?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PluginManagerResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}