#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/ShutdownNotification.hpp"
namespace lol {
  inline Result<ShutdownNotification> GetLolShutdownV1Notification(LeagueClient& _client)
  {
    try {
      return Result<ShutdownNotification> {
        _client.https.request("get", "/lol-shutdown/v1/notification?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<ShutdownNotification> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolShutdownV1Notification(LeagueClient& _client, std::function<void(LeagueClient&,const Result<ShutdownNotification>&)> cb)
  {
    _client.httpsa.request("get", "/lol-shutdown/v1/notification?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<ShutdownNotification> { response });
          else
            cb(_client,Result<ShutdownNotification> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}