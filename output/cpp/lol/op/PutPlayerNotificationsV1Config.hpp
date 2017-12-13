#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerNotificationConfigResource.hpp>
namespace lol {
  Result<PlayerNotificationConfigResource> PutPlayerNotificationsV1Config(const LeagueClient& _client, const PlayerNotificationConfigResource& config)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PlayerNotificationConfigResource> {
        _client_.request("put", "/player-notifications/v1/config?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(config).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerNotificationConfigResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}