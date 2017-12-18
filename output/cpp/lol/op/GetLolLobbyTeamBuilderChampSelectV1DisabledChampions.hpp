#pragma once
#include "../base_op.hpp" 
#include "../def/LolLobbyTeamBuilderChampSelectDisabledChampions.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderChampSelectDisabledChampions> GetLolLobbyTeamBuilderChampSelectV1DisabledChampions(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyTeamBuilderChampSelectDisabledChampions> {
        _client_.request("get", "/lol-lobby-team-builder/champ-select/v1/disabled-champions?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderChampSelectDisabledChampions> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}