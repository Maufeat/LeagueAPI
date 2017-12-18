#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerMessagingNotificationResource.hpp"
namespace lol {
  inline Result<PlayerMessagingNotificationResource> GetLolPlayerMessagingV1Notification(LeagueClient& _client)
  {
    try {
      return ToResult<PlayerMessagingNotificationResource>(_client.https.request("get", "/lol-player-messaging/v1/notification?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PlayerMessagingNotificationResource>(e.code());
    }
  }
  inline void GetLolPlayerMessagingV1Notification(LeagueClient& _client, std::function<void(LeagueClient&, const Result<PlayerMessagingNotificationResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-player-messaging/v1/notification?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PlayerMessagingNotificationResource>(e));
            else
              cb(_client, ToResult<PlayerMessagingNotificationResource>(response));
        });
  }
}