#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PluginDescriptionResource.hpp"
namespace lol {
  inline Result<std::vector<PluginDescriptionResource>> GetPluginManagerV2Descriptions(LeagueClient& _client)
  {
    try {
      return Result<std::vector<PluginDescriptionResource>> {
        _client.https.request("get", "/plugin-manager/v2/descriptions?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<PluginDescriptionResource>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetPluginManagerV2Descriptions(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<PluginDescriptionResource>>&)> cb)
  {
    _client.httpsa.request("get", "/plugin-manager/v2/descriptions?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<PluginDescriptionResource>> { response });
          else
            cb(_client,Result<std::vector<PluginDescriptionResource>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}