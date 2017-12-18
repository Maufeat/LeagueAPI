#pragma once
#include "../base_op.hpp" 
#include "../def/LolPlayerBehaviorBanNotification.hpp"
namespace lol {
  inline Result<LolPlayerBehaviorBanNotification> GetLolPlayerBehaviorV1Ban(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolPlayerBehaviorBanNotification> {
        _client_.request("get", "/lol-player-behavior/v1/ban?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPlayerBehaviorBanNotification> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}