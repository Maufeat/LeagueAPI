#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobby.hpp"
#include "../def/LolLobbyLobbyChangeQueue.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLobbyLobby> PostLolLobbyV1ChangeQueue(T& _client, const LolLobbyLobbyChangeQueue& queueId)
  {
    try {
      return ToResult<LolLobbyLobby>(_client.https.request("post", "/lol-lobby/v1/change-queue?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(queueId).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyLobby>(e.code());
    }
  }
  template<typename T>
  inline void PostLolLobbyV1ChangeQueue(T& _client, const LolLobbyLobbyChangeQueue& queueId, std::function<void(T&, const Result<LolLobbyLobby>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby/v1/change-queue?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(queueId).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyLobby>(e));
            else
              cb(_client, ToResult<LolLobbyLobby>(response));
        });
  }
}