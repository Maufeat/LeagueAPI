#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyNotification.hpp>
namespace lol {
  Result<void> PostLolLobbyV2Notifications(const LeagueClient& _client, const LolLobbyLobbyNotification& notification)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby/v2/notifications?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(notification).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}