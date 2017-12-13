#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerNotificationConfigResource.hpp>
namespace lol {
  Result<PlayerNotificationConfigResource> GetPlayerNotificationsV1Config(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/player-notifications/v1/config?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}