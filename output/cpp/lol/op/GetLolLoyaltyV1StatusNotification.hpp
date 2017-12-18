#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LoyaltyStatusNotification.hpp"
namespace lol {
  inline Result<LoyaltyStatusNotification> GetLolLoyaltyV1StatusNotification(LeagueClient& _client)
  {
    try {
      return Result<LoyaltyStatusNotification> {
        _client.https.request("get", "/lol-loyalty/v1/status-notification?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LoyaltyStatusNotification> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLoyaltyV1StatusNotification(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LoyaltyStatusNotification>&)> cb)
  {
    _client.httpsa.request("get", "/lol-loyalty/v1/status-notification?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LoyaltyStatusNotification> { response });
          else
            cb(_client,Result<LoyaltyStatusNotification> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}