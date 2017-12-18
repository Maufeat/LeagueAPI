#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<json> PostLolHighlightsV1FileBrowserByHighlightId(const LeagueClient& _client, const uint64_t& highlightId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-highlights/v1/file-browser/"+to_string(highlightId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}