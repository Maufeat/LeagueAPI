#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashPlayerNotificationData.hpp"
namespace lol {
  inline Result<LolClashPlayerNotificationData> GetLolClashV1Notifications(LeagueClient& _client)
  {
    try {
      return Result<LolClashPlayerNotificationData> {
        _client.https.request("get", "/lol-clash/v1/notifications?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashPlayerNotificationData> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolClashV1Notifications(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolClashPlayerNotificationData>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/notifications?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolClashPlayerNotificationData> { response });
          else
            cb(_client,Result<LolClashPlayerNotificationData> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}