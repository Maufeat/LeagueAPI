#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyTeamBuilderLobbyCountdownTimer.hpp>
namespace lol {
  Result<LolLobbyTeamBuilderLobbyCountdownTimer> GetLolLobbyTeamBuilderV1LobbyCountdown(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyTeamBuilderLobbyCountdownTimer> {
        _client_.request("get", "/lol-lobby-team-builder/v1/lobby/countdown?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderLobbyCountdownTimer> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}