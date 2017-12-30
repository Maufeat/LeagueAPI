#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerNotificationConfigResource.hpp"
namespace lol {
  template<typename T>
  inline Result<PlayerNotificationConfigResource> GetPlayerNotificationsV1Config(T& _client)
  {
    try {
      return ToResult<PlayerNotificationConfigResource>(_client.https.request("get", "/player-notifications/v1/config?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PlayerNotificationConfigResource>(e.code());
    }
  }
  template<typename T>
  inline void GetPlayerNotificationsV1Config(T& _client, std::function<void(T&, const Result<PlayerNotificationConfigResource>&)> cb)
  {
    _client.httpsa.request("get", "/player-notifications/v1/config?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PlayerNotificationConfigResource>(e));
            else
              cb(_client, ToResult<PlayerNotificationConfigResource>(response));
        });
  }
}