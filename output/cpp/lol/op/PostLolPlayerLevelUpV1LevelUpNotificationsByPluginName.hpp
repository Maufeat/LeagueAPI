#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerLevelUpEventAck.hpp>
namespace lol {
  Result<void> PostLolPlayerLevelUpV1LevelUpNotificationsByPluginName(const LeagueClient& _client, const std::string& pluginName, const PlayerLevelUpEventAck& levelUpEventAck)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-player-level-up/v1/level-up-notifications/"+to_string(pluginName)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(levelUpEventAck).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}