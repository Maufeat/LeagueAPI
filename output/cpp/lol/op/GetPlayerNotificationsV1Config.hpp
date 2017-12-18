#pragma once
#include "../base_op.hpp" 
#include "../def/PlayerNotificationConfigResource.hpp"
namespace lol {
  inline Result<PlayerNotificationConfigResource> GetPlayerNotificationsV1Config(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PlayerNotificationConfigResource> {
        _client_.request("get", "/player-notifications/v1/config?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerNotificationConfigResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}