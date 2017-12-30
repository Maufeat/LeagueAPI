#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyMatchmakingSearchResource.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLobbyLobbyMatchmakingSearchResource> GetLolLobbyV2LobbyMatchmakingSearchState(T& _client)
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
  template<typename T>
  inline void GetLolLobbyV2LobbyMatchmakingSearchState(T& _client, std::function<void(T&, const Result<LolLobbyLobbyMatchmakingSearchResource>&)> cb)
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