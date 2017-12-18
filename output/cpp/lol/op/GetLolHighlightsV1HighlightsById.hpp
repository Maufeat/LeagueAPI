#pragma once
#include "../base_op.hpp" 
#include "../def/Highlight.hpp"
namespace lol {
  inline Result<Highlight> GetLolHighlightsV1HighlightsById(const LeagueClient& _client, const uint64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<Highlight> {
        _client_.request("get", "/lol-highlights/v1/highlights/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<Highlight> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}