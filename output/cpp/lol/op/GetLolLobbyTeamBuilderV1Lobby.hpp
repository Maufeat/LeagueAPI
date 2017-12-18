#pragma once
#include "../base_op.hpp" 
#include "../def/LolLobbyTeamBuilderLobby.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderLobby> GetLolLobbyTeamBuilderV1Lobby(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyTeamBuilderLobby> {
        _client_.request("get", "/lol-lobby-team-builder/v1/lobby?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderLobby> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}