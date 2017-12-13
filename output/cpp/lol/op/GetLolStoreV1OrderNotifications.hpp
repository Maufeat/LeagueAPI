#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolStoreOrderNotificationResource.hpp>
namespace lol {
  Result<std::vector<LolStoreOrderNotificationResource>> GetLolStoreV1OrderNotifications(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolStoreOrderNotificationResource>> {
        _client_.request("get", "/lol-store/v1/order-notifications?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolStoreOrderNotificationResource>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}