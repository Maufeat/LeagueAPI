#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/DynamicCelebrationMessagingNotificationResource.hpp>
namespace lol {
  Result<DynamicCelebrationMessagingNotificationResource> GetLolPlayerMessagingV1CelebrationNotification(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-player-messaging/v1/celebration/notification?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}