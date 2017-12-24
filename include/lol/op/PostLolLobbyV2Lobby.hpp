#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyDto.hpp"
#include "../def/LolLobbyLobbyChangeGameDto.hpp"
namespace lol {
  inline Result<LolLobbyLobbyDto> PostLolLobbyV2Lobby(LeagueClient& _client, const LolLobbyLobbyChangeGameDto& lobbyChange)
  {
    try {
      return ToResult<LolLobbyLobbyDto>(_client.https.request("post", "/lol-lobby/v2/lobby?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(lobbyChange).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyLobbyDto>(e.code());
    }
  }
  inline void PostLolLobbyV2Lobby(LeagueClient& _client, const LolLobbyLobbyChangeGameDto& lobbyChange, std::function<void(LeagueClient&, const Result<LolLobbyLobbyDto>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby/v2/lobby?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(lobbyChange).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyLobbyDto>(e));
            else
              cb(_client, ToResult<LolLobbyLobbyDto>(response));
        });
  }
}