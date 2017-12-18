#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LoyaltyStatusNotification.hpp"
namespace lol {
  inline Result<LoyaltyStatusNotification> GetLolLoyaltyV1StatusNotification(LeagueClient& _client)
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
  inline void GetLolLoyaltyV1StatusNotification(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LoyaltyStatusNotification>&)> cb)
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