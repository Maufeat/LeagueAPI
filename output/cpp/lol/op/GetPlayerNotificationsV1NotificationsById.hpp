#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerNotificationResource.hpp>
namespace lol {
  Result<PlayerNotificationResource> GetPlayerNotificationsV1NotificationsById(const LeagueClient& _client, const uint64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/player-notifications/v1/notifications/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}