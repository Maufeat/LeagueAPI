#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyCustomGame.hpp"
namespace lol {
  inline Result<LolLobbyLobbyCustomGame> GetLolLobbyV1CustomGamesById(LeagueClient& _client, const int32_t& id)
  {
    try {
      return ToResult<LolLobbyLobbyCustomGame>(_client.https.request("get", "/lol-lobby/v1/custom-games/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyLobbyCustomGame>(e.code());
    }
  }
  inline void GetLolLobbyV1CustomGamesById(LeagueClient& _client, const int32_t& id, std::function<void(LeagueClient&, const Result<LolLobbyLobbyCustomGame>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v1/custom-games/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyLobbyCustomGame>(e));
            else
              cb(_client, ToResult<LolLobbyLobbyCustomGame>(response));
        });
  }
}