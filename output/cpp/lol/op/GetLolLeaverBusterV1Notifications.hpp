#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LeaverBusterNotificationResource.hpp"
namespace lol {
  inline Result<std::vector<LeaverBusterNotificationResource>> GetLolLeaverBusterV1Notifications(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LeaverBusterNotificationResource>> {
        _client.https.request("get", "/lol-leaver-buster/v1/notifications?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LeaverBusterNotificationResource>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLeaverBusterV1Notifications(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LeaverBusterNotificationResource>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-leaver-buster/v1/notifications?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LeaverBusterNotificationResource>> { response });
          else
            cb(_client,Result<std::vector<LeaverBusterNotificationResource>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}