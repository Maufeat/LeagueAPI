#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/Highlight.hpp"
namespace lol {
  inline Result<Highlight> PutLolHighlightsV1HighlightsById(LeagueClient& _client, const uint64_t& id, const Highlight& highlight)
  {
    try {
      return Result<Highlight> {
        _client.https.request("put", "/lol-highlights/v1/highlights/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(highlight).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<Highlight> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PutLolHighlightsV1HighlightsById(LeagueClient& _client, const uint64_t& id, const Highlight& highlight, std::function<void(LeagueClient&,const Result<Highlight>&)> cb)
  {
    _client.httpsa.request("put", "/lol-highlights/v1/highlights/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(highlight).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<Highlight> { response });
          else
            cb(_client,Result<Highlight> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}