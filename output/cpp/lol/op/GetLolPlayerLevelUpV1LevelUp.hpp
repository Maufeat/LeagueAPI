#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerLevelUpEvent.hpp>
namespace lol {
  inline Result<PlayerLevelUpEvent> GetLolPlayerLevelUpV1LevelUp(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PlayerLevelUpEvent> {
        _client_.request("get", "/lol-player-level-up/v1/level-up?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerLevelUpEvent> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}