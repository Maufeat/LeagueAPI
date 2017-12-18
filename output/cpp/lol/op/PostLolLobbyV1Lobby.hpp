#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobby.hpp>
namespace lol {
  inline Result<LolLobbyLobby> PostLolLobbyV1Lobby(const LeagueClient& _client, const LolLobbyLobby& lobby)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyLobby> {
        _client_.request("post", "/lol-lobby/v1/lobby?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(lobby).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyLobby> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}