#pragma once
#include "../base_op.hpp" 
#include "../def/LolLobbyTeamBuilderChampSelectPickableSkins.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderChampSelectPickableSkins> GetLolLobbyTeamBuilderChampSelectV1PickableSkins(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyTeamBuilderChampSelectPickableSkins> {
        _client_.request("get", "/lol-lobby-team-builder/champ-select/v1/pickable-skins?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderChampSelectPickableSkins> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}