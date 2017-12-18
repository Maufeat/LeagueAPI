#pragma once
#include "../base_op.hpp" 
#include "../def/Highlight.hpp"
namespace lol {
  inline Result<std::vector<Highlight>> GetLolHighlightsV1Highlights(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<Highlight>> {
        _client_.request("get", "/lol-highlights/v1/highlights?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<Highlight>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}