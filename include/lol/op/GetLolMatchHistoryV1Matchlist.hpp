#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMatchHistoryMatchHistoryList.hpp"
namespace lol {
  inline Result<LolMatchHistoryMatchHistoryList> GetLolMatchHistoryV1Matchlist(LeagueClient& _client)
  {
    try {
      return ToResult<LolMatchHistoryMatchHistoryList>(_client.https.request("get", "/lol-match-history/v1/matchlist?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolMatchHistoryMatchHistoryList>(e.code());
    }
  }
  inline void GetLolMatchHistoryV1Matchlist(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolMatchHistoryMatchHistoryList>&)> cb)
  {
    _client.httpsa.request("get", "/lol-match-history/v1/matchlist?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolMatchHistoryMatchHistoryList>(e));
            else
              cb(_client, ToResult<LolMatchHistoryMatchHistoryList>(response));
        });
  }
}