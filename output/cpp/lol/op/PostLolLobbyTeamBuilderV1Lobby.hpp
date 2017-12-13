#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyTeamBuilderLobby.hpp>
namespace lol {
  Result<LolLobbyTeamBuilderLobby> PostLolLobbyTeamBuilderV1Lobby(const LeagueClient& _client, const LolLobbyTeamBuilderLobby& lobby)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby-team-builder/v1/lobby?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(lobby).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}