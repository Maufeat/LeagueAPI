#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyLastQueuedLobby.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLobbyLobbyLastQueuedLobby> GetLolLobbyV1LastQueuedLobby(T& _client)
  {
    try {
      return ToResult<LolLobbyLobbyLastQueuedLobby>(_client.https.request("get", "/lol-lobby/v1/last-queued-lobby?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyLobbyLastQueuedLobby>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLobbyV1LastQueuedLobby(T& _client, std::function<void(T&, const Result<LolLobbyLobbyLastQueuedLobby>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v1/last-queued-lobby?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyLobbyLastQueuedLobby>(e));
            else
              cb(_client, ToResult<LolLobbyLobbyLastQueuedLobby>(response));
        });
  }
}