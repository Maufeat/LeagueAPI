#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LeaverBusterNotificationResource.hpp"
namespace lol {
  inline Result<LeaverBusterNotificationResource> GetLolLeaverBusterV1NotificationsById(LeagueClient& _client, const uint32_t& id)
  {
    try {
      return Result<LeaverBusterNotificationResource> {
        _client.https.request("get", "/lol-leaver-buster/v1/notifications/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LeaverBusterNotificationResource> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLeaverBusterV1NotificationsById(LeagueClient& _client, const uint32_t& id, std::function<void(LeagueClient&,const Result<LeaverBusterNotificationResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-leaver-buster/v1/notifications/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LeaverBusterNotificationResource> { response });
          else
            cb(_client,Result<LeaverBusterNotificationResource> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}