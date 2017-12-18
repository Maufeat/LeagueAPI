#pragma once
#include "../base_op.hpp" 
#include "../def/LolPlayerBehaviorRestrictionNotification.hpp"
namespace lol {
  inline Result<LolPlayerBehaviorRestrictionNotification> GetLolPlayerBehaviorV1RankedRestriction(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolPlayerBehaviorRestrictionNotification> {
        _client_.request("get", "/lol-player-behavior/v1/ranked-restriction?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPlayerBehaviorRestrictionNotification> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}