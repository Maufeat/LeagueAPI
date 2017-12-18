#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerLevelUpEventAck.hpp"
namespace lol {
  inline Result<PlayerLevelUpEventAck> GetLolPlayerLevelUpV1LevelUpNotificationsByPluginName(LeagueClient& _client, const std::string& pluginName)
  {
    try {
      return Result<PlayerLevelUpEventAck> {
        _client.https.request("get", "/lol-player-level-up/v1/level-up-notifications/"+to_string(pluginName)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerLevelUpEventAck> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolPlayerLevelUpV1LevelUpNotificationsByPluginName(LeagueClient& _client, const std::string& pluginName, std::function<void(LeagueClient&,const Result<PlayerLevelUpEventAck>&)> cb)
  {
    _client.httpsa.request("get", "/lol-player-level-up/v1/level-up-notifications/"+to_string(pluginName)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<PlayerLevelUpEventAck> { response });
          else
            cb(_client,Result<PlayerLevelUpEventAck> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}