#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolMatchmakingMatchmakingSearchResource.hpp>
namespace lol {
  Result<LolMatchmakingMatchmakingSearchResource> GetLolMatchmakingV1Search(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-matchmaking/v1/search?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}