#pragma once
#include "../base_op.hpp" 
#include "../def/LolLobbyTeamBuilderChampSelectPickableChampions.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderChampSelectPickableChampions> GetLolLobbyTeamBuilderChampSelectV1PickableChampions(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyTeamBuilderChampSelectPickableChampions> {
        _client_.request("get", "/lol-lobby-team-builder/champ-select/v1/pickable-champions?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderChampSelectPickableChampions> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}