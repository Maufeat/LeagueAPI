#pragma once
#include "../base_op.hpp" 
#include "../def/PluginDescriptionResource.hpp"
namespace lol {
  inline Result<std::vector<PluginDescriptionResource>> GetPluginManagerV2Descriptions(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<PluginDescriptionResource>> {
        _client_.request("get", "/plugin-manager/v2/descriptions?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<PluginDescriptionResource>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}