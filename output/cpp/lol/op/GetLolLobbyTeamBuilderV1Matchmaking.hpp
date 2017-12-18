#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyTeamBuilderMatchmakingSearchResource.hpp>
namespace lol {
  inline Result<LolLobbyTeamBuilderMatchmakingSearchResource> GetLolLobbyTeamBuilderV1Matchmaking(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyTeamBuilderMatchmakingSearchResource> {
        _client_.request("get", "/lol-lobby-team-builder/v1/matchmaking?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderMatchmakingSearchResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}