#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyChangeGameDto.hpp>
#include <lol/def/LolLobbyLobbyDto.hpp>
namespace lol {
  Result<LolLobbyLobbyDto> PostLolLobbyV2Lobby(const LeagueClient& _client, const LolLobbyLobbyChangeGameDto& lobbyChange)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby/v2/lobby?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(lobbyChange).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}