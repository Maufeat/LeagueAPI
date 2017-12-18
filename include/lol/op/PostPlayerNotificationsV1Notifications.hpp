#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerNotificationResource.hpp"
namespace lol {
  inline Result<PlayerNotificationResource> PostPlayerNotificationsV1Notifications(LeagueClient& _client, const PlayerNotificationResource& notification)
  {
    try {
      return ToResult<PlayerNotificationResource>(_client.https.request("post", "/player-notifications/v1/notifications?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(notification).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PlayerNotificationResource>(e.code());
    }
  }
  inline void PostPlayerNotificationsV1Notifications(LeagueClient& _client, const PlayerNotificationResource& notification, std::function<void(LeagueClient&, const Result<PlayerNotificationResource>&)> cb)
  {
    _client.httpsa.request("post", "/player-notifications/v1/notifications?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(notification).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PlayerNotificationResource>(e));
            else
              cb(_client, ToResult<PlayerNotificationResource>(response));
        });
  }
}