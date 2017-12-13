#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSummonerSummonerRequestedName.hpp>
#include <lol/def/LolSummonerInternalSummoner.hpp>
namespace lol {
  Result<LolSummonerInternalSummoner> PostLolSummonerV1Summoners(const LeagueClient& _client, const LolSummonerSummonerRequestedName& name)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-summoner/v1/summoners?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(name).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}