#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyTeamBuilderLobby.hpp>
namespace lol {
  Result<LolLobbyTeamBuilderLobby> GetLolLobbyTeamBuilderV1Lobby(const LeagueClient& _client)
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