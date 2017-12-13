#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyCustomChampSelectStartResponse.hpp>
namespace lol {
  Result<LolLobbyLobbyCustomChampSelectStartResponse> PostLolLobbyV1LobbyCustomStartChampSelect(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby/v1/lobby/custom/start-champ-select?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}