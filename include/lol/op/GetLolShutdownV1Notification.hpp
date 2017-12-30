#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/ShutdownNotification.hpp"
namespace lol {
  template<typename T>
  inline Result<ShutdownNotification> GetLolShutdownV1Notification(T& _client)
  {
    try {
      return ToResult<ShutdownNotification>(_client.https.request("get", "/lol-shutdown/v1/notification?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<ShutdownNotification>(e.code());
    }
  }
  template<typename T>
  inline void GetLolShutdownV1Notification(T& _client, std::function<void(T&, const Result<ShutdownNotification>&)> cb)
  {
    _client.httpsa.request("get", "/lol-shutdown/v1/notification?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<ShutdownNotification>(e));
            else
              cb(_client, ToResult<ShutdownNotification>(response));
        });
  }
}