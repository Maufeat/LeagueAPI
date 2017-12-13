#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<bool> GetLolLobbyV2LobbyCustomBotsEnabled(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-lobby/v2/lobby/custom/bots-enabled?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}