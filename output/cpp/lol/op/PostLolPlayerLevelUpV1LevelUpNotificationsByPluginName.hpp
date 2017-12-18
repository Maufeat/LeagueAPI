#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerLevelUpEventAck.hpp"
namespace lol {
  inline Result<void> PostLolPlayerLevelUpV1LevelUpNotificationsByPluginName(LeagueClient& _client, const std::string& pluginName, const PlayerLevelUpEventAck& levelUpEventAck)
  {
    try {
      return Result<void> {
        _client.https.request("post", "/lol-player-level-up/v1/level-up-notifications/"+to_string(pluginName)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(levelUpEventAck).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolPlayerLevelUpV1LevelUpNotificationsByPluginName(LeagueClient& _client, const std::string& pluginName, const PlayerLevelUpEventAck& levelUpEventAck, std::function<void(LeagueClient&,const Result<void>&)> cb)
  {
    _client.httpsa.request("post", "/lol-player-level-up/v1/level-up-notifications/"+to_string(pluginName)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(levelUpEventAck).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<void> { response });
          else
            cb(_client,Result<void> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}