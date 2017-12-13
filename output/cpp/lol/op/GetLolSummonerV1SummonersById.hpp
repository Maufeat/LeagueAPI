#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSummonerSummoner.hpp>
namespace lol {
  Result<LolSummonerSummoner> GetLolSummonerV1SummonersById(const LeagueClient& _client, const uint64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-summoner/v1/summoners/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}