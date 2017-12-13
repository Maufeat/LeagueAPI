#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSummonerSummoner.hpp>
#include <lol/def/LolSummonerSummonerIcon.hpp>
namespace lol {
  Result<LolSummonerSummoner> PutLolSummonerV1CurrentSummonerIcon(const LeagueClient& _client, const LolSummonerSummonerIcon& body)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-summoner/v1/current-summoner/icon?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(body).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}