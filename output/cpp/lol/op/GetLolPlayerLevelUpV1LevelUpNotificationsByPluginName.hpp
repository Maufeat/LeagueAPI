#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerLevelUpEventAck.hpp>
namespace lol {
  inline Result<PlayerLevelUpEventAck> GetLolPlayerLevelUpV1LevelUpNotificationsByPluginName(const LeagueClient& _client, const std::string& pluginName)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PlayerLevelUpEventAck> {
        _client_.request("get", "/lol-player-level-up/v1/level-up-notifications/"+to_string(pluginName)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerLevelUpEventAck> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}