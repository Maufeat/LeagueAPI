#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMatchHistoryMatchHistoryPlayerDelta.hpp"
namespace lol {
  inline Result<LolMatchHistoryMatchHistoryPlayerDelta> GetLolMatchHistoryV1Delta(LeagueClient& _client)
  {
    try {
      return ToResult<LolMatchHistoryMatchHistoryPlayerDelta>(_client.https.request("get", "/lol-match-history/v1/delta?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolMatchHistoryMatchHistoryPlayerDelta>(e.code());
    }
  }
  inline void GetLolMatchHistoryV1Delta(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolMatchHistoryMatchHistoryPlayerDelta>&)> cb)
  {
    _client.httpsa.request("get", "/lol-match-history/v1/delta?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolMatchHistoryMatchHistoryPlayerDelta>(e));
            else
              cb(_client, ToResult<LolMatchHistoryMatchHistoryPlayerDelta>(response));
        });
  }
}