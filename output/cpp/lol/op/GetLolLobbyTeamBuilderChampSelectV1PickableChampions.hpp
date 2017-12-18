#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderChampSelectPickableChampions.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderChampSelectPickableChampions> GetLolLobbyTeamBuilderChampSelectV1PickableChampions(LeagueClient& _client)
  {
    try {
      return Result<LolLobbyTeamBuilderChampSelectPickableChampions> {
        _client.https.request("get", "/lol-lobby-team-builder/champ-select/v1/pickable-champions?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderChampSelectPickableChampions> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyTeamBuilderChampSelectV1PickableChampions(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolLobbyTeamBuilderChampSelectPickableChampions>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/champ-select/v1/pickable-champions?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLobbyTeamBuilderChampSelectPickableChampions> { response });
          else
            cb(_client,Result<LolLobbyTeamBuilderChampSelectPickableChampions> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}