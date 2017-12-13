#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PluginManagerResource.hpp>
namespace lol {
  Result<PluginManagerResource> GetPluginManagerV1Status(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/plugin-manager/v1/status?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}