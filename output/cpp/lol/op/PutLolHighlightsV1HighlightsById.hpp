#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/Highlight.hpp>
namespace lol {
  Result<Highlight> PutLolHighlightsV1HighlightsById(const LeagueClient& _client, const uint64_t& id, const Highlight& highlight)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-highlights/v1/highlights/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(highlight).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}