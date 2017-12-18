#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobby.hpp>
namespace lol {
  inline Result<LolLobbyLobby> PostLolLobbyV1LastQueuedLobbyPlayAgain(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyLobby> {
        _client_.request("post", "/lol-lobby/v1/last-queued-lobby/play-again?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyLobby> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}