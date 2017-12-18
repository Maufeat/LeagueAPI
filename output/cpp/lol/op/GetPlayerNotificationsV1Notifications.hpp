#pragma once
#include "../base_op.hpp" 
#include "../def/PlayerNotificationResource.hpp"
namespace lol {
  inline Result<std::vector<PlayerNotificationResource>> GetPlayerNotificationsV1Notifications(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<PlayerNotificationResource>> {
        _client_.request("get", "/player-notifications/v1/notifications?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<PlayerNotificationResource>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}