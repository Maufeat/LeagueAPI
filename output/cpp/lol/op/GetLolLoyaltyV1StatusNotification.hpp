#pragma once
#include "../base_op.hpp" 
#include "../def/LoyaltyStatusNotification.hpp"
namespace lol {
  inline Result<LoyaltyStatusNotification> GetLolLoyaltyV1StatusNotification(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LoyaltyStatusNotification> {
        _client_.request("get", "/lol-loyalty/v1/status-notification?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LoyaltyStatusNotification> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}