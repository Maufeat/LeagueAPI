#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobby.hpp>
namespace lol {
  inline Result<LolLobbyLobby> GetLolLobbyV1Lobby(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyLobby> {
        _client_.request("get", "/lol-lobby/v1/lobby?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyLobby> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}