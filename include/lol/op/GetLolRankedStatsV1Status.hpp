#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolRankedStatsPluginStatus.hpp"
namespace lol {
  inline Result<LolRankedStatsPluginStatus> GetLolRankedStatsV1Status(LeagueClient& _client)
  {
    try {
      return ToResult<LolRankedStatsPluginStatus>(_client.https.request("get", "/lol-ranked-stats/v1/status?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolRankedStatsPluginStatus>(e.code());
    }
  }
  inline void GetLolRankedStatsV1Status(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolRankedStatsPluginStatus>&)> cb)
  {
    _client.httpsa.request("get", "/lol-ranked-stats/v1/status?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolRankedStatsPluginStatus>(e));
            else
              cb(_client, ToResult<LolRankedStatsPluginStatus>(response));
        });
  }
}