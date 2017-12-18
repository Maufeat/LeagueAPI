#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerNotificationResource.hpp"
namespace lol {
  inline Result<PlayerNotificationResource> GetPlayerNotificationsV1NotificationsById(LeagueClient& _client, const uint64_t& id)
  {
    try {
      return Result<PlayerNotificationResource> {
        _client.https.request("get", "/player-notifications/v1/notifications/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerNotificationResource> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetPlayerNotificationsV1NotificationsById(LeagueClient& _client, const uint64_t& id, std::function<void(LeagueClient&,const Result<PlayerNotificationResource>&)> cb)
  {
    _client.httpsa.request("get", "/player-notifications/v1/notifications/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<PlayerNotificationResource> { response });
          else
            cb(_client,Result<PlayerNotificationResource> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}