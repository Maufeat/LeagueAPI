#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolStoreOrderNotificationResource.hpp"
namespace lol {
  inline Result<LolStoreOrderNotificationResource> GetLolStoreV1OrderNotificationsById(LeagueClient& _client, const uint64_t& id)
  {
    try {
      return Result<LolStoreOrderNotificationResource> {
        _client.https.request("get", "/lol-store/v1/order-notifications/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolStoreOrderNotificationResource> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolStoreV1OrderNotificationsById(LeagueClient& _client, const uint64_t& id, std::function<void(LeagueClient&,const Result<LolStoreOrderNotificationResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-store/v1/order-notifications/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolStoreOrderNotificationResource> { response });
          else
            cb(_client,Result<LolStoreOrderNotificationResource> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}