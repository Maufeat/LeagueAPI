#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerLevelUpEventAck.hpp"
namespace lol {
  inline Result<PlayerLevelUpEventAck> GetLolPlayerLevelUpV1LevelUpNotificationsByPluginName(LeagueClient& _client, const std::string& pluginName)
  {
    try {
      return ToResult<PlayerLevelUpEventAck>(_client.https.request("get", "/lol-player-level-up/v1/level-up-notifications/"+to_string(pluginName)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PlayerLevelUpEventAck>(e.code());
    }
  }
  inline void GetLolPlayerLevelUpV1LevelUpNotificationsByPluginName(LeagueClient& _client, const std::string& pluginName, std::function<void(LeagueClient&, const Result<PlayerLevelUpEventAck>&)> cb)
  {
    _client.httpsa.request("get", "/lol-player-level-up/v1/level-up-notifications/"+to_string(pluginName)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PlayerLevelUpEventAck>(e));
            else
              cb(_client, ToResult<PlayerLevelUpEventAck>(response));
        });
  }
}