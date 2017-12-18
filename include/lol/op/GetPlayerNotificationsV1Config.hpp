#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerNotificationConfigResource.hpp"
namespace lol {
  inline Result<PlayerNotificationConfigResource> GetPlayerNotificationsV1Config(LeagueClient& _client)
  {
    try {
      return ToResult<PlayerNotificationConfigResource>(_client.https.request("get", "/player-notifications/v1/config?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<PlayerNotificationConfigResource>(e.code());
    }
  }
  inline void GetPlayerNotificationsV1Config(LeagueClient& _client, std::function<void(LeagueClient&, const Result<PlayerNotificationConfigResource>&)> cb)
  {
    _client.httpsa.request("get", "/player-notifications/v1/config?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<PlayerNotificationConfigResource>(e));
            else
              cb(_client, ToResult<PlayerNotificationConfigResource>(response));
        });
  }
}