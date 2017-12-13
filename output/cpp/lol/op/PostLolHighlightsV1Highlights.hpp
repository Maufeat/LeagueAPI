#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/Highlight.hpp>
namespace lol {
  Result<std::vector<Highlight>> PostLolHighlightsV1Highlights(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-highlights/v1/highlights?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}