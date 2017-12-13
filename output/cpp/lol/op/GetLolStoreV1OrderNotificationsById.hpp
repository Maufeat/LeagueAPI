#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolStoreOrderNotificationResource.hpp>
namespace lol {
  Result<LolStoreOrderNotificationResource> GetLolStoreV1OrderNotificationsById(const LeagueClient& _client, const uint64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolStoreOrderNotificationResource> {
        _client_.request("get", "/lol-store/v1/order-notifications/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolStoreOrderNotificationResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}