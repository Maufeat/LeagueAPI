#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolRankedStatsRankedData.hpp>
namespace lol {
  Result<LolRankedStatsRankedData> GetLolRankedStatsV1StatsBySummonerId(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-ranked-stats/v1/stats/"+to_string(summonerId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}