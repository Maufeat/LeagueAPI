#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSummonerSummoner.hpp>
namespace lol {
  Result<LolSummonerSummoner> PostLolSummonerV1CurrentSummonerName(const LeagueClient& _client, const std::string& name)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-summoner/v1/current-summoner/name?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(name).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}