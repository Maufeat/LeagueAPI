#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyTeamBuilderMatchmakingSearchResource.hpp>
namespace lol {
  inline Result<LolLobbyTeamBuilderMatchmakingSearchResource> PostLolLobbyTeamBuilderV1MatchmakingSearch(const LeagueClient& _client, const std::string& leaverBusterToken)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyTeamBuilderMatchmakingSearchResource> {
        _client_.request("post", "/lol-lobby-team-builder/v1/matchmaking/search?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(leaverBusterToken).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderMatchmakingSearchResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}