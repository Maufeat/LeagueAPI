#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderChampSelectSession.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderChampSelectSession> GetLolLobbyTeamBuilderChampSelectV1Session(LeagueClient& _client)
  {
    try {
      return ToResult<LolLobbyTeamBuilderChampSelectSession>(_client.https.request("get", "/lol-lobby-team-builder/champ-select/v1/session?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyTeamBuilderChampSelectSession>(e.code());
    }
  }
  inline void GetLolLobbyTeamBuilderChampSelectV1Session(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolLobbyTeamBuilderChampSelectSession>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/champ-select/v1/session?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyTeamBuilderChampSelectSession>(e));
            else
              cb(_client, ToResult<LolLobbyTeamBuilderChampSelectSession>(response));
        });
  }
}