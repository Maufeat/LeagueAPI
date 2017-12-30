#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashPlayerNotificationData.hpp"
namespace lol {
  template<typename T>
  inline Result<LolClashPlayerNotificationData> GetLolClashV1Notifications(T& _client)
  {
    try {
      return ToResult<LolClashPlayerNotificationData>(_client.https.request("get", "/lol-clash/v1/notifications?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolClashPlayerNotificationData>(e.code());
    }
  }
  template<typename T>
  inline void GetLolClashV1Notifications(T& _client, std::function<void(T&, const Result<LolClashPlayerNotificationData>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/notifications?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolClashPlayerNotificationData>(e));
            else
              cb(_client, ToResult<LolClashPlayerNotificationData>(response));
        });
  }
}