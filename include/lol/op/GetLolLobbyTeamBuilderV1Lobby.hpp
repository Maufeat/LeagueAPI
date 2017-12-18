#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderLobby.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderLobby> GetLolLobbyTeamBuilderV1Lobby(LeagueClient& _client)
  {
    try {
      return ToResult<LolLobbyTeamBuilderLobby>(_client.https.request("get", "/lol-lobby-team-builder/v1/lobby?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyTeamBuilderLobby>(e.code());
    }
  }
  inline void GetLolLobbyTeamBuilderV1Lobby(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolLobbyTeamBuilderLobby>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/v1/lobby?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyTeamBuilderLobby>(e));
            else
              cb(_client, ToResult<LolLobbyTeamBuilderLobby>(response));
        });
  }
}