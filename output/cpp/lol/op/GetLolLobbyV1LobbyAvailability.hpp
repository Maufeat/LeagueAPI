#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyQueueAvailability.hpp>
namespace lol {
  Result<LolLobbyQueueAvailability> GetLolLobbyV1LobbyAvailability(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-lobby/v1/lobby/availability?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}