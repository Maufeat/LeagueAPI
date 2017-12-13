#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerLevelUpEvent.hpp>
namespace lol {
  Result<PlayerLevelUpEvent> GetLolPlayerLevelUpV1LevelUp(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-player-level-up/v1/level-up?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}