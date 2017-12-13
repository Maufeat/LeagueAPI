#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PluginDescriptionResource.hpp>
namespace lol {
  Result<std::vector<PluginDescriptionResource>> GetPluginManagerV2Descriptions(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/plugin-manager/v2/descriptions?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}