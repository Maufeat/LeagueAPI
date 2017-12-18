#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyTeamBuilderChampSelectSession.hpp>
namespace lol {
  inline Result<LolLobbyTeamBuilderChampSelectSession> GetLolLobbyTeamBuilderChampSelectV1Session(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyTeamBuilderChampSelectSession> {
        _client_.request("get", "/lol-lobby-team-builder/champ-select/v1/session?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderChampSelectSession> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}