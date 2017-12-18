#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerLevelUpEventAck.hpp"
namespace lol {
  inline Result<std::nullptr_t> PostLolPlayerLevelUpV1LevelUpNotificationsByPluginName(LeagueClient& _client, const std::string& pluginName, const PlayerLevelUpEventAck& levelUpEventAck)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/lol-player-level-up/v1/level-up-notifications/"+to_string(pluginName)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(levelUpEventAck).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostLolPlayerLevelUpV1LevelUpNotificationsByPluginName(LeagueClient& _client, const std::string& pluginName, const PlayerLevelUpEventAck& levelUpEventAck, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("post", "/lol-player-level-up/v1/level-up-notifications/"+to_string(pluginName)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(levelUpEventAck).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}