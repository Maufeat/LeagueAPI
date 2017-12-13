#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerNotificationResource.hpp>
namespace lol {
  Result<PlayerNotificationResource> PutPlayerNotificationsV1NotificationsById(const LeagueClient& _client, const uint64_t& id, const json& notification)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/player-notifications/v1/notifications/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(notification).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}