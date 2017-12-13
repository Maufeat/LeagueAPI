#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerNotificationResource.hpp>
namespace lol {
  Result<PlayerNotificationResource> PostPlayerNotificationsV1Notifications(const LeagueClient& _client, const PlayerNotificationResource& notification)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PlayerNotificationResource> {
        _client_.request("post", "/player-notifications/v1/notifications?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(notification).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerNotificationResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}