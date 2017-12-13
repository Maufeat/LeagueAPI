#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> GetPluginManagerV1PluginStatsLog(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/plugin-manager/v1/plugin-stats/log?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}