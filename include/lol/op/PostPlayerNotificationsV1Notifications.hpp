#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerNotificationResource.hpp"
namespace lol {
  template<typename T>
  inline Result<PlayerNotificationResource> PostPlayerNotificationsV1Notifications(T& _client, const PlayerNotificationResource& notification)
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
  template<typename T>
  inline void PostPlayerNotificationsV1Notifications(T& _client, const PlayerNotificationResource& notification, std::function<void(T&, const Result<PlayerNotificationResource>&)> cb)
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