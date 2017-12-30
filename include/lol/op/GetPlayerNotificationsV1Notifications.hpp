#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerNotificationResource.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<PlayerNotificationResource>> GetPlayerNotificationsV1Notifications(T& _client)
  {
    try {
      return ToResult<std::vector<PlayerNotificationResource>>(_client.https.request("get", "/player-notifications/v1/notifications?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<PlayerNotificationResource>>(e.code());
    }
  }
  template<typename T>
  inline void GetPlayerNotificationsV1Notifications(T& _client, std::function<void(T&, const Result<std::vector<PlayerNotificationResource>>&)> cb)
  {
    _client.httpsa.request("get", "/player-notifications/v1/notifications?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<PlayerNotificationResource>>(e));
            else
              cb(_client, ToResult<std::vector<PlayerNotificationResource>>(response));
        });
  }
}