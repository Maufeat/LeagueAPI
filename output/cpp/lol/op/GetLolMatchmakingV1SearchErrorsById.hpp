#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolMatchmakingMatchmakingSearchErrorResource.hpp>
namespace lol {
  Result<LolMatchmakingMatchmakingSearchErrorResource> GetLolMatchmakingV1SearchErrorsById(const LeagueClient& _client, const int32_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-matchmaking/v1/search/errors/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}