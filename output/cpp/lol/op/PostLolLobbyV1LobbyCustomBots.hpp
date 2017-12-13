#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyBotParams.hpp>
namespace lol {
  Result<json> PostLolLobbyV1LobbyCustomBots(const LeagueClient& _client, const LolLobbyLobbyBotParams& parameters)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-lobby/v1/lobby/custom/bots?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(parameters).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}