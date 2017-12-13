#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> DeleteLolLobbyV2NotificationsByNotificationId(const LeagueClient& _client, const std::string& notificationId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/lol-lobby/v2/notifications/"+to_string(notificationId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}