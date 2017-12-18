#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMatchHistoryRecentlyPlayedSummoner.hpp"
namespace lol {
  inline Result<std::vector<LolMatchHistoryRecentlyPlayedSummoner>> GetLolMatchHistoryV1RecentlyPlayedSummoners(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<LolMatchHistoryRecentlyPlayedSummoner>>(_client.https.request("get", "/lol-match-history/v1/recently-played-summoners?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolMatchHistoryRecentlyPlayedSummoner>>(e.code());
    }
  }
  inline void GetLolMatchHistoryV1RecentlyPlayedSummoners(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<LolMatchHistoryRecentlyPlayedSummoner>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-match-history/v1/recently-played-summoners?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolMatchHistoryRecentlyPlayedSummoner>>(e));
            else
              cb(_client, ToResult<std::vector<LolMatchHistoryRecentlyPlayedSummoner>>(response));
        });
  }
}