#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LeaverBusterNotificationResource.hpp"
namespace lol {
  inline Result<LeaverBusterNotificationResource> GetLolLeaverBusterV1NotificationsById(LeagueClient& _client, const uint32_t& id)
  {
    try {
      return ToResult<LeaverBusterNotificationResource>(_client.https.request("get", "/lol-leaver-buster/v1/notifications/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LeaverBusterNotificationResource>(e.code());
    }
  }
  inline void GetLolLeaverBusterV1NotificationsById(LeagueClient& _client, const uint32_t& id, std::function<void(LeagueClient&, const Result<LeaverBusterNotificationResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-leaver-buster/v1/notifications/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LeaverBusterNotificationResource>(e));
            else
              cb(_client, ToResult<LeaverBusterNotificationResource>(response));
        });
  }
}