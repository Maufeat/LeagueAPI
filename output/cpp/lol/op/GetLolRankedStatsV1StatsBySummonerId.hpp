#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolRankedStatsRankedData.hpp"
namespace lol {
  inline Result<LolRankedStatsRankedData> GetLolRankedStatsV1StatsBySummonerId(LeagueClient& _client, const uint64_t& summonerId)
  {
    try {
      return Result<LolRankedStatsRankedData> {
        _client.https.request("get", "/lol-ranked-stats/v1/stats/"+to_string(summonerId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolRankedStatsRankedData> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolRankedStatsV1StatsBySummonerId(LeagueClient& _client, const uint64_t& summonerId, std::function<void(LeagueClient&,const Result<LolRankedStatsRankedData>&)> cb)
  {
    _client.httpsa.request("get", "/lol-ranked-stats/v1/stats/"+to_string(summonerId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolRankedStatsRankedData> { response });
          else
            cb(_client,Result<LolRankedStatsRankedData> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}