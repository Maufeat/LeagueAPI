#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<json> DeleteLolLobbyV2NotificationsByNotificationId(const LeagueClient& _client, const std::string& notificationId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("delete", "/lol-lobby/v2/notifications/"+to_string(notificationId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}