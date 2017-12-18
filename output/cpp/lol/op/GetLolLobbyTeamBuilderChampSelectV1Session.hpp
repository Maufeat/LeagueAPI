#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderChampSelectSession.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderChampSelectSession> GetLolLobbyTeamBuilderChampSelectV1Session(LeagueClient& _client)
  {
    try {
      return Result<LolLobbyTeamBuilderChampSelectSession> {
        _client.https.request("get", "/lol-lobby-team-builder/champ-select/v1/session?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderChampSelectSession> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyTeamBuilderChampSelectV1Session(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolLobbyTeamBuilderChampSelectSession>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/champ-select/v1/session?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLobbyTeamBuilderChampSelectSession> { response });
          else
            cb(_client,Result<LolLobbyTeamBuilderChampSelectSession> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}