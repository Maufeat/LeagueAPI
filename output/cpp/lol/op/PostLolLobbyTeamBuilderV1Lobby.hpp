#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyTeamBuilderLobby.hpp>
namespace lol {
  Result<LolLobbyTeamBuilderLobby> PostLolLobbyTeamBuilderV1Lobby(const LeagueClient& _client, const LolLobbyTeamBuilderLobby& lobby)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyTeamBuilderLobby> {
        _client_.request("post", "/lol-lobby-team-builder/v1/lobby?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(lobby).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderLobby> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}