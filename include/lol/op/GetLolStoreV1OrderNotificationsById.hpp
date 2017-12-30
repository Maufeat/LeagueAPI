#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolStoreOrderNotificationResource.hpp"
namespace lol {
  template<typename T>
  inline Result<LolStoreOrderNotificationResource> GetLolStoreV1OrderNotificationsById(T& _client, const uint64_t& id)
  {
    try {
      return ToResult<LolStoreOrderNotificationResource>(_client.https.request("get", "/lol-store/v1/order-notifications/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolStoreOrderNotificationResource>(e.code());
    }
  }
  template<typename T>
  inline void GetLolStoreV1OrderNotificationsById(T& _client, const uint64_t& id, std::function<void(T&, const Result<LolStoreOrderNotificationResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-store/v1/order-notifications/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolStoreOrderNotificationResource>(e));
            else
              cb(_client, ToResult<LolStoreOrderNotificationResource>(response));
        });
  }
}