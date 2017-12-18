#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/Highlight.hpp"
namespace lol {
  inline Result<std::vector<Highlight>> PostLolHighlightsV1Highlights(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<Highlight>>(_client.https.request("post", "/lol-highlights/v1/highlights?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<Highlight>>(e.code());
    }
  }
  inline void PostLolHighlightsV1Highlights(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<Highlight>>&)> cb)
  {
    _client.httpsa.request("post", "/lol-highlights/v1/highlights?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<Highlight>>(e));
            else
              cb(_client, ToResult<std::vector<Highlight>>(response));
        });
  }
}