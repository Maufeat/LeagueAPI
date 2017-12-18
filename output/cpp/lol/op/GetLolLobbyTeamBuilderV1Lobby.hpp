#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderLobby.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderLobby> GetLolLobbyTeamBuilderV1Lobby(LeagueClient& _client)
  {
    try {
      return Result<LolLobbyTeamBuilderLobby> {
        _client.https.request("get", "/lol-lobby-team-builder/v1/lobby?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderLobby> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyTeamBuilderV1Lobby(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolLobbyTeamBuilderLobby>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/v1/lobby?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLobbyTeamBuilderLobby> { response });
          else
            cb(_client,Result<LolLobbyTeamBuilderLobby> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}