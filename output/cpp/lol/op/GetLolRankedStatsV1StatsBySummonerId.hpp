#pragma once
#include "../base_op.hpp" 
#include "../def/LolRankedStatsRankedData.hpp"
namespace lol {
  inline Result<LolRankedStatsRankedData> GetLolRankedStatsV1StatsBySummonerId(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolRankedStatsRankedData> {
        _client_.request("get", "/lol-ranked-stats/v1/stats/"+to_string(summonerId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolRankedStatsRankedData> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}