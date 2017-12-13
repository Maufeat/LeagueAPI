#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/ShutdownNotification.hpp>
namespace lol {
  Result<ShutdownNotification> GetLolShutdownV1Notification(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<ShutdownNotification> {
        _client_.request("get", "/lol-shutdown/v1/notification?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<ShutdownNotification> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}