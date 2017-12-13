#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolMatchmakingMatchmakingSearchErrorResource.hpp>
namespace lol {
  Result<std::vector<LolMatchmakingMatchmakingSearchErrorResource>> GetLolMatchmakingV1SearchErrors(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-matchmaking/v1/search/errors?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}