#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolMatchmakingMatchmakingSearchResource.hpp>
namespace lol {
  Result<json> PutLolMatchmakingV1Search(const LeagueClient& _client, const LolMatchmakingMatchmakingSearchResource& search)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-matchmaking/v1/search?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(search).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}