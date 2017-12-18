#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderMatchmakingSearchResource.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderMatchmakingSearchResource> GetLolLobbyTeamBuilderV1Matchmaking(LeagueClient& _client)
  {
    try {
      return Result<LolLobbyTeamBuilderMatchmakingSearchResource> {
        _client.https.request("get", "/lol-lobby-team-builder/v1/matchmaking?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyTeamBuilderMatchmakingSearchResource> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLobbyTeamBuilderV1Matchmaking(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolLobbyTeamBuilderMatchmakingSearchResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/v1/matchmaking?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolLobbyTeamBuilderMatchmakingSearchResource> { response });
          else
            cb(_client,Result<LolLobbyTeamBuilderMatchmakingSearchResource> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}