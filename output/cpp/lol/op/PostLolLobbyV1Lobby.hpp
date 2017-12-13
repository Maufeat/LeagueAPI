#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobby.hpp>
namespace lol {
  Result<LolLobbyLobby> PostLolLobbyV1Lobby(const LeagueClient& _client, const LolLobbyLobby& lobby)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby/v1/lobby?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(lobby).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}