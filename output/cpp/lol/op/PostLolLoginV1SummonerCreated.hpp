#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLoginSummonerCreatedResource.hpp>
namespace lol {
  Result<json> PostLolLoginV1SummonerCreated(const LeagueClient& _client, const LolLoginSummonerCreatedResource& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-login/v1/summoner-created?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(summonerId).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}