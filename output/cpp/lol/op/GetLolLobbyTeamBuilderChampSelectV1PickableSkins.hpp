#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderChampSelectPickableSkins.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderChampSelectPickableSkins> GetLolLobbyTeamBuilderChampSelectV1PickableSkins(LeagueClient& _client)
  {
    try {
      return Result<LolLobbyTeamBuilderChampSelectPickableSkins> {
        _client.https.request("get", "/lol-lobby-team-builder/champ-select/v1/pickable-skins?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderChampSelectPickableSkins> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyTeamBuilderChampSelectV1PickableSkins(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolLobbyTeamBuilderChampSelectPickableSkins>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/champ-select/v1/pickable-skins?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLobbyTeamBuilderChampSelectPickableSkins> { response });
          else
            cb(_client,Result<LolLobbyTeamBuilderChampSelectPickableSkins> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}