#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderMatchmakingSearchResource.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderMatchmakingSearchResource> GetLolLobbyTeamBuilderV1Matchmaking(LeagueClient& _client)
  {
    try {
      return ToResult<LolLobbyTeamBuilderMatchmakingSearchResource>(_client.https.request("get", "/lol-lobby-team-builder/v1/matchmaking?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyTeamBuilderMatchmakingSearchResource>(e.code());
    }
  }
  inline void GetLolLobbyTeamBuilderV1Matchmaking(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolLobbyTeamBuilderMatchmakingSearchResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby-team-builder/v1/matchmaking?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyTeamBuilderMatchmakingSearchResource>(e));
            else
              cb(_client, ToResult<LolLobbyTeamBuilderMatchmakingSearchResource>(response));
        });
  }
}