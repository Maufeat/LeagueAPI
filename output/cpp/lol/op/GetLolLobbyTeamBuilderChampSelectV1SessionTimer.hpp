#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyTeamBuilderChampSelectTimer.hpp>
namespace lol {
  Result<LolLobbyTeamBuilderChampSelectTimer> GetLolLobbyTeamBuilderChampSelectV1SessionTimer(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyTeamBuilderChampSelectTimer> {
        _client_.request("get", "/lol-lobby-team-builder/champ-select/v1/session/timer?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderChampSelectTimer> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}