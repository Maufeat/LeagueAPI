#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyTeamBuilderMatchmakingSearchResource.hpp>
namespace lol {
  Result<LolLobbyTeamBuilderMatchmakingSearchResource> PostLolLobbyTeamBuilderV1MatchmakingSearch(const LeagueClient& _client, const std::string& leaverBusterToken)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby-team-builder/v1/matchmaking/search?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(leaverBusterToken).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}