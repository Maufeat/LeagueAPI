#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerNotificationResource.hpp"
namespace lol {
  inline Result<PlayerNotificationResource> PutPlayerNotificationsV1NotificationsById(LeagueClient& _client, const uint64_t& id, const json& notification)
  {
    try {
      return ToResult<PlayerNotificationResource>(_client.https.request("put", "/player-notifications/v1/notifications/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(notification).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PlayerNotificationResource>(e.code());
    }
  }
  inline void PutPlayerNotificationsV1NotificationsById(LeagueClient& _client, const uint64_t& id, const json& notification, std::function<void(LeagueClient&, const Result<PlayerNotificationResource>&)> cb)
  {
    _client.httpsa.request("put", "/player-notifications/v1/notifications/"+to_string(id)+"?" +
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