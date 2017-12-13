#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobby.hpp>
#include <lol/def/LolLobbyLobbyChangeQueue.hpp>
namespace lol {
  Result<LolLobbyLobby> PostLolLobbyV1ChangeQueue(const LeagueClient& _client, const LolLobbyLobbyChangeQueue& queueId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby/v1/change-queue?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(queueId).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}