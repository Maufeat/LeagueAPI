#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LeaverBusterNotificationResource.hpp>
namespace lol {
  Result<std::vector<LeaverBusterNotificationResource>> GetLolLeaverBusterV1Notifications(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LeaverBusterNotificationResource>> {
        _client_.request("get", "/lol-leaver-buster/v1/notifications?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LeaverBusterNotificationResource>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}