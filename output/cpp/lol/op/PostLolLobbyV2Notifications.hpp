#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyNotification.hpp>
namespace lol {
  inline Result<void> PostLolLobbyV2Notifications(const LeagueClient& _client, const LolLobbyLobbyNotification& notification)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-lobby/v2/notifications?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(notification).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}