#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyTeamBuilderMatchmakingSearchResource.hpp>
namespace lol {
  Result<LolLobbyTeamBuilderMatchmakingSearchResource> GetLolLobbyTeamBuilderV1Matchmaking(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-lobby-team-builder/v1/matchmaking?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}