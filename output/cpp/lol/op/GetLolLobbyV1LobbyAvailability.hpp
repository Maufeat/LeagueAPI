#pragma once
#include "../base_op.hpp" 
#include "../def/LolLobbyQueueAvailability.hpp"
namespace lol {
  inline Result<LolLobbyQueueAvailability> GetLolLobbyV1LobbyAvailability(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyQueueAvailability> {
        _client_.request("get", "/lol-lobby/v1/lobby/availability?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyQueueAvailability> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}