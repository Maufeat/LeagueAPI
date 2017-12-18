#pragma once
#include "../base_op.hpp" 
#include "../def/LolLobbyLobbyDto.hpp"
namespace lol {
  inline Result<LolLobbyLobbyDto> GetLolLobbyV2Lobby(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyLobbyDto> {
        _client_.request("get", "/lol-lobby/v2/lobby?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyLobbyDto> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}