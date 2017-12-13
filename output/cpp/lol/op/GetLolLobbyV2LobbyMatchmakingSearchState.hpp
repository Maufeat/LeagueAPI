#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyMatchmakingSearchResource.hpp>
namespace lol {
  Result<LolLobbyLobbyMatchmakingSearchResource> GetLolLobbyV2LobbyMatchmakingSearchState(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolLobbyLobbyMatchmakingSearchResource> {
        _client_.request("get", "/lol-lobby/v2/lobby/matchmaking/search-state?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolLobbyLobbyMatchmakingSearchResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}