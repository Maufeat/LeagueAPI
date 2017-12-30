#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolRankedStatsRankedData.hpp"
namespace lol {
  template<typename T>
  inline Result<LolRankedStatsRankedData> GetLolRankedStatsV1StatsBySummonerId(T& _client, const uint64_t& summonerId)
  {
    try {
      return ToResult<LolRankedStatsRankedData>(_client.https.request("get", "/lol-ranked-stats/v1/stats/"+to_string(summonerId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolRankedStatsRankedData>(e.code());
    }
  }
  template<typename T>
  inline void GetLolRankedStatsV1StatsBySummonerId(T& _client, const uint64_t& summonerId, std::function<void(T&, const Result<LolRankedStatsRankedData>&)> cb)
  {
    _client.httpsa.request("get", "/lol-ranked-stats/v1/stats/"+to_string(summonerId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolRankedStatsRankedData>(e));
            else
              cb(_client, ToResult<LolRankedStatsRankedData>(response));
        });
  }
}