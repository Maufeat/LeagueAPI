#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/KickoutMessage.hpp>
namespace lol {
  Result<KickoutMessage> GetLolKickoutV1Notification(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<KickoutMessage> {
        _client_.request("get", "/lol-kickout/v1/notification?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<KickoutMessage> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}