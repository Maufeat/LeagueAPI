#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderMatchmakingSearchResource.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderMatchmakingSearchResource> PostLolLobbyTeamBuilderV1MatchmakingSearch(LeagueClient& _client, const std::string& leaverBusterToken)
  {
    try {
      return Result<LolLobbyTeamBuilderMatchmakingSearchResource> {
        _client.https.request("post", "/lol-lobby-team-builder/v1/matchmaking/search?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(leaverBusterToken).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderMatchmakingSearchResource> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolLobbyTeamBuilderV1MatchmakingSearch(LeagueClient& _client, const std::string& leaverBusterToken, std::function<void(LeagueClient&,const Result<LolLobbyTeamBuilderMatchmakingSearchResource>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby-team-builder/v1/matchmaking/search?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(leaverBusterToken).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLobbyTeamBuilderMatchmakingSearchResource> { response });
          else
            cb(_client,Result<LolLobbyTeamBuilderMatchmakingSearchResource> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}