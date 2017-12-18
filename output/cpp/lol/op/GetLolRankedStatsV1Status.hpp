#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolRankedStatsPluginStatus.hpp"
namespace lol {
  inline Result<LolRankedStatsPluginStatus> GetLolRankedStatsV1Status(LeagueClient& _client)
  {
    try {
      return Result<LolRankedStatsPluginStatus> {
        _client.https.request("get", "/lol-ranked-stats/v1/status?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolRankedStatsPluginStatus> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolRankedStatsV1Status(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolRankedStatsPluginStatus>&)> cb)
  {
    _client.httpsa.request("get", "/lol-ranked-stats/v1/status?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolRankedStatsPluginStatus> { response });
          else
            cb(_client,Result<LolRankedStatsPluginStatus> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}