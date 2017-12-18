#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/Highlight.hpp"
namespace lol {
  inline Result<std::vector<Highlight>> PostLolHighlightsV1Highlights(LeagueClient& _client)
  {
    try {
      return Result<std::vector<Highlight>> {
        _client.https.request("post", "/lol-highlights/v1/highlights?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<Highlight>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolHighlightsV1Highlights(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<Highlight>>&)> cb)
  {
    _client.httpsa.request("post", "/lol-highlights/v1/highlights?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<Highlight>> { response });
          else
            cb(_client,Result<std::vector<Highlight>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}