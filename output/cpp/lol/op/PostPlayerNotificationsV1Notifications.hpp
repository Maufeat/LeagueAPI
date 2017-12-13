#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerNotificationResource.hpp>
namespace lol {
  Result<PlayerNotificationResource> PostPlayerNotificationsV1Notifications(const LeagueClient& _client, const PlayerNotificationResource& notification)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/player-notifications/v1/notifications?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(notification).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}