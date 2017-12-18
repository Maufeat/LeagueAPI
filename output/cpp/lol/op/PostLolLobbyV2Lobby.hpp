#pragma once
#include "../base_op.hpp" 
#include "../def/LolLobbyLobbyDto.hpp"
#include "../def/LolLobbyLobbyChangeGameDto.hpp"
namespace lol {
  inline Result<LolLobbyLobbyDto> PostLolLobbyV2Lobby(const LeagueClient& _client, const LolLobbyLobbyChangeGameDto& lobbyChange)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyLobbyDto> {
        _client_.request("post", "/lol-lobby/v2/lobby?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(lobbyChange).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyLobbyDto> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}