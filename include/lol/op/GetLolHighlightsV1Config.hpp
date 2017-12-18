#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/HighlightsConfig.hpp"
namespace lol {
  inline Result<HighlightsConfig> GetLolHighlightsV1Config(LeagueClient& _client)
  {
    try {
      return ToResult<HighlightsConfig>(_client.https.request("get", "/lol-highlights/v1/config?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<HighlightsConfig>(e.code());
    }
  }
  inline void GetLolHighlightsV1Config(LeagueClient& _client, std::function<void(LeagueClient&, const Result<HighlightsConfig>&)> cb)
  {
    _client.httpsa.request("get", "/lol-highlights/v1/config?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<HighlightsConfig>(e));
            else
              cb(_client, ToResult<HighlightsConfig>(response));
        });
  }
}