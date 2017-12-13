#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLeaguesLeague.hpp>
namespace lol {
  Result<std::vector<LolLeaguesLeague>> GetLolLeaguesV1SummonerLeaguesBySummonerId(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-leagues/v1/summoner-leagues/"+to_string(summonerId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}