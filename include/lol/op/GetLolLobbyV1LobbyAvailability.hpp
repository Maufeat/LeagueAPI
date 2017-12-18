#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyQueueAvailability.hpp"
namespace lol {
  inline Result<LolLobbyQueueAvailability> GetLolLobbyV1LobbyAvailability(LeagueClient& _client)
  {
    try {
      return ToResult<LolLobbyQueueAvailability>(_client.https.request("get", "/lol-lobby/v1/lobby/availability?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyQueueAvailability>(e.code());
    }
  }
  inline void GetLolLobbyV1LobbyAvailability(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolLobbyQueueAvailability>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v1/lobby/availability?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyQueueAvailability>(e));
            else
              cb(_client, ToResult<LolLobbyQueueAvailability>(response));
        });
  }
}