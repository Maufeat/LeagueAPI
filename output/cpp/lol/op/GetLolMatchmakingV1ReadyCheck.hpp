#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolMatchmakingMatchmakingReadyCheckResource.hpp>
namespace lol {
  Result<LolMatchmakingMatchmakingReadyCheckResource> GetLolMatchmakingV1ReadyCheck(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-matchmaking/v1/ready-check?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}