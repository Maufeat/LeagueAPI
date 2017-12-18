#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyMatchmakingSearchResource.hpp"
namespace lol {
  inline Result<LolLobbyLobbyMatchmakingSearchResource> GetLolLobbyV2LobbyMatchmakingSearchState(LeagueClient& _client)
  {
    try {
      return ToResult<LolLobbyLobbyMatchmakingSearchResource>(_client.https.request("get", "/lol-lobby/v2/lobby/matchmaking/search-state?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyLobbyMatchmakingSearchResource>(e.code());
    }
  }
  inline void GetLolLobbyV2LobbyMatchmakingSearchState(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolLobbyLobbyMatchmakingSearchResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v2/lobby/matchmaking/search-state?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyLobbyMatchmakingSearchResource>(e));
            else
              cb(_client, ToResult<LolLobbyLobbyMatchmakingSearchResource>(response));
        });
  }
}