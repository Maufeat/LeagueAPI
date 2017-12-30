#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyNotification.hpp"
namespace lol {
  template<typename T>
  inline Result<Nothing> PostLolLobbyV2Notifications(T& _client, const LolLobbyLobbyNotification& notification)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/lol-lobby/v2/notifications?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(notification).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PostLolLobbyV2Notifications(T& _client, const LolLobbyLobbyNotification& notification, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby/v2/notifications?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(notification).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}