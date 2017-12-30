#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/TencentQTNotification.hpp"
namespace lol {
  template<typename T>
  inline Result<std::map<std::string, TencentQTNotification>> GetLolTencentQtV1UiStates(T& _client)
  {
    try {
      return ToResult<std::map<std::string, TencentQTNotification>>(_client.https.request("get", "/lol-tencent-qt/v1/ui-states?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::map<std::string, TencentQTNotification>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolTencentQtV1UiStates(T& _client, std::function<void(T&, const Result<std::map<std::string, TencentQTNotification>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-tencent-qt/v1/ui-states?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::map<std::string, TencentQTNotification>>(e));
            else
              cb(_client, ToResult<std::map<std::string, TencentQTNotification>>(response));
        });
  }
}