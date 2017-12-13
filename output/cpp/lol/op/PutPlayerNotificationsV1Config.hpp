#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerNotificationConfigResource.hpp>
namespace lol {
  Result<PlayerNotificationConfigResource> PutPlayerNotificationsV1Config(const LeagueClient& _client, const PlayerNotificationConfigResource& config)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/player-notifications/v1/config?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(config).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}