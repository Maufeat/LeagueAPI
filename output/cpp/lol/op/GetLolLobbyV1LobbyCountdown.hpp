#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<int64_t> GetLolLobbyV1LobbyCountdown(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<int64_t> {
        _client_.request("get", "/lol-lobby/v1/lobby/countdown?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<int64_t> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}