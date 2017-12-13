#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> DeleteLolLobbyV1Lobby(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/lol-lobby/v1/lobby?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}