#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyCustomGame.hpp>
namespace lol {
  Result<LolLobbyLobbyCustomGame> GetLolLobbyV1CustomGamesById(const LeagueClient& _client, const int32_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-lobby/v1/custom-games/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}