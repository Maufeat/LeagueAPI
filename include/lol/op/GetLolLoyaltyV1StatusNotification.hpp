#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LoyaltyStatusNotification.hpp"
namespace lol {
  template<typename T>
  inline Result<LoyaltyStatusNotification> GetLolLoyaltyV1StatusNotification(T& _client)
  {
    try {
      return ToResult<LoyaltyStatusNotification>(_client.https.request("get", "/lol-loyalty/v1/status-notification?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LoyaltyStatusNotification>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLoyaltyV1StatusNotification(T& _client, std::function<void(T&, const Result<LoyaltyStatusNotification>&)> cb)
  {
    _client.httpsa.request("get", "/lol-loyalty/v1/status-notification?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LoyaltyStatusNotification>(e));
            else
              cb(_client, ToResult<LoyaltyStatusNotification>(response));
        });
  }
}