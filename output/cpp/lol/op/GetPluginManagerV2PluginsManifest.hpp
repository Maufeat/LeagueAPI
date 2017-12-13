#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> GetPluginManagerV2PluginsManifest(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/plugin-manager/v2/plugins-manifest?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}