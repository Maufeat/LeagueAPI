#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobby.hpp"
namespace lol {
  inline Result<LolLobbyLobby> GetLolLobbyV1Lobby(LeagueClient& _client)
  {
    try {
      return Result<LolLobbyLobby> {
        _client.https.request("get", "/lol-lobby/v1/lobby?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyLobby> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyV1Lobby(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolLobbyLobby>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v1/lobby?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLobbyLobby> { response });
          else
            cb(_client,Result<LolLobbyLobby> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}