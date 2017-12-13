#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LoyaltyStatusNotification.hpp>
namespace lol {
  Result<LoyaltyStatusNotification> GetLolLoyaltyV1StatusNotification(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-loyalty/v1/status-notification?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}