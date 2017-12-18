#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PatcherNotificationId.hpp"
namespace lol {
  inline Result<std::nullptr_t> PostPatcherV1Notifications(LeagueClient& _client, const PatcherNotificationId& notificationId)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/patcher/v1/notifications?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "notificationId", to_string(notificationId) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostPatcherV1Notifications(LeagueClient& _client, const PatcherNotificationId& notificationId, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("post", "/patcher/v1/notifications?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "notificationId", to_string(notificationId) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}