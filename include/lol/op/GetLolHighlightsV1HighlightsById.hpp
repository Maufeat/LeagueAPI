#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/Highlight.hpp"
namespace lol {
  inline Result<Highlight> GetLolHighlightsV1HighlightsById(LeagueClient& _client, const uint64_t& id)
  {
    try {
      return ToResult<Highlight>(_client.https.request("get", "/lol-highlights/v1/highlights/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Highlight>(e.code());
    }
  }
  inline void GetLolHighlightsV1HighlightsById(LeagueClient& _client, const uint64_t& id, std::function<void(LeagueClient&, const Result<Highlight>&)> cb)
  {
    _client.httpsa.request("get", "/lol-highlights/v1/highlights/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Highlight>(e));
            else
              cb(_client, ToResult<Highlight>(response));
        });
  }
}