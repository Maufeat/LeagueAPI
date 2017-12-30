#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PatcherNotificationId.hpp"
namespace lol {
  template<typename T>
  inline Result<Nothing> PostPatcherV1Notifications(T& _client, const PatcherNotificationId& notificationId)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/patcher/v1/notifications?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "notificationId", to_string(notificationId) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PostPatcherV1Notifications(T& _client, const PatcherNotificationId& notificationId, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/patcher/v1/notifications?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "notificationId", to_string(notificationId) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}