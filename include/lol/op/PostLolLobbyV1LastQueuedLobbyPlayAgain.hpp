#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobby.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLobbyLobby> PostLolLobbyV1LastQueuedLobbyPlayAgain(T& _client)
  {
    try {
      return ToResult<LolLobbyLobby>(_client.https.request("post", "/lol-lobby/v1/last-queued-lobby/play-again?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyLobby>(e.code());
    }
  }
  template<typename T>
  inline void PostLolLobbyV1LastQueuedLobbyPlayAgain(T& _client, std::function<void(T&, const Result<LolLobbyLobby>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby/v1/last-queued-lobby/play-again?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyLobby>(e));
            else
              cb(_client, ToResult<LolLobbyLobby>(response));
        });
  }
}