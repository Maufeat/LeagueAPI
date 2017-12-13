#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> GetLolLasToxicityV1SummonersBySummonerId(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-las-toxicity/v1/summoners/"+to_string(summonerId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}