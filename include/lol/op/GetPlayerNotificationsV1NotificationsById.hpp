#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerNotificationResource.hpp"
namespace lol {
  template<typename T>
  inline Result<PlayerNotificationResource> GetPlayerNotificationsV1NotificationsById(T& _client, const uint64_t& id)
  {
    try {
      return ToResult<PlayerNotificationResource>(_client.https.request("get", "/player-notifications/v1/notifications/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PlayerNotificationResource>(e.code());
    }
  }
  template<typename T>
  inline void GetPlayerNotificationsV1NotificationsById(T& _client, const uint64_t& id, std::function<void(T&, const Result<PlayerNotificationResource>&)> cb)
  {
    _client.httpsa.request("get", "/player-notifications/v1/notifications/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PlayerNotificationResource>(e));
            else
              cb(_client, ToResult<PlayerNotificationResource>(response));
        });
  }
}