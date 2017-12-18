#pragma once
#include "../base_op.hpp" 
#include "../def/DynamicCelebrationMessagingNotificationResource.hpp"
namespace lol {
  inline Result<DynamicCelebrationMessagingNotificationResource> GetLolPlayerMessagingV1CelebrationNotification(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<DynamicCelebrationMessagingNotificationResource> {
        _client_.request("get", "/lol-player-messaging/v1/celebration/notification?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<DynamicCelebrationMessagingNotificationResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}