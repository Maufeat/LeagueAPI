#pragma once
#include "../base_op.hpp" 
#include "../def/HighlightsConfig.hpp"
namespace lol {
  inline Result<HighlightsConfig> GetLolHighlightsV1Config(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<HighlightsConfig> {
        _client_.request("get", "/lol-highlights/v1/config?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<HighlightsConfig> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}