#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderChampSelectDisabledChampions.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderChampSelectDisabledChampions> GetLolLobbyTeamBuilderChampSelectV1DisabledChampions(LeagueClient& _client)
  {
    try {
      return Result<LolLobbyTeamBuilderChampSelectDisabledChampions> {
        _client.https.request("get", "/lol-lobby-team-builder/champ-select/v1/disabled-champions?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderChampSelectDisabledChampions> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyTeamBuilderChampSelectV1DisabledChampions(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolLobbyTeamBuilderChampSelectDisabledChampions>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/champ-select/v1/disabled-champions?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLobbyTeamBuilderChampSelectDisabledChampions> { response });
          else
            cb(_client,Result<LolLobbyTeamBuilderChampSelectDisabledChampions> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}