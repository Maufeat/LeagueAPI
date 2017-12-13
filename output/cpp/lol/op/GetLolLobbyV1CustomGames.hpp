#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyCustomGame.hpp>
namespace lol {
  Result<std::vector<LolLobbyLobbyCustomGame>> GetLolLobbyV1CustomGames(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-lobby/v1/custom-games?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}