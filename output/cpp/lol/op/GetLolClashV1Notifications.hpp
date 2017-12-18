#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashPlayerNotificationData.hpp>
namespace lol {
  inline Result<LolClashPlayerNotificationData> GetLolClashV1Notifications(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolClashPlayerNotificationData> {
        _client_.request("get", "/lol-clash/v1/notifications?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashPlayerNotificationData> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}