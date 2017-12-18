#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/Highlight.hpp>
namespace lol {
  inline Result<Highlight> PutLolHighlightsV1HighlightsById(const LeagueClient& _client, const uint64_t& id, const Highlight& highlight)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<Highlight> {
        _client_.request("put", "/lol-highlights/v1/highlights/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(highlight).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<Highlight> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}