#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/DynamicCelebrationMessagingNotificationResource.hpp"
namespace lol {
  inline Result<DynamicCelebrationMessagingNotificationResource> GetLolPlayerMessagingV1CelebrationNotification(LeagueClient& _client)
  {
    try {
      return ToResult<DynamicCelebrationMessagingNotificationResource>(_client.https.request("get", "/lol-player-messaging/v1/celebration/notification?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<DynamicCelebrationMessagingNotificationResource>(e.code());
    }
  }
  inline void GetLolPlayerMessagingV1CelebrationNotification(LeagueClient& _client, std::function<void(LeagueClient&, const Result<DynamicCelebrationMessagingNotificationResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-player-messaging/v1/celebration/notification?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<DynamicCelebrationMessagingNotificationResource>(e));
            else
              cb(_client, ToResult<DynamicCelebrationMessagingNotificationResource>(response));
        });
  }
}