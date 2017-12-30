#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/Highlight.hpp"
namespace lol {
  template<typename T>
  inline Result<Highlight> PutLolHighlightsV1HighlightsById(T& _client, const uint64_t& id, const Highlight& highlight)
  {
    try {
      return ToResult<Highlight>(_client.https.request("put", "/lol-highlights/v1/highlights/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(highlight).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Highlight>(e.code());
    }
  }
  template<typename T>
  inline void PutLolHighlightsV1HighlightsById(T& _client, const uint64_t& id, const Highlight& highlight, std::function<void(T&, const Result<Highlight>&)> cb)
  {
    _client.httpsa.request("put", "/lol-highlights/v1/highlights/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(highlight).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Highlight>(e));
            else
              cb(_client, ToResult<Highlight>(response));
        });
  }
}