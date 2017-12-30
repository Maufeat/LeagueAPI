#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/Highlight.hpp"
namespace lol {
  template<typename T>
  inline Result<Highlight> DeleteLolHighlightsV1HighlightsById(T& _client, const uint64_t& id)
  {
    try {
      return ToResult<Highlight>(_client.https.request("delete", "/lol-highlights/v1/highlights/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Highlight>(e.code());
    }
  }
  template<typename T>
  inline void DeleteLolHighlightsV1HighlightsById(T& _client, const uint64_t& id, std::function<void(T&, const Result<Highlight>&)> cb)
  {
    _client.httpsa.request("delete", "/lol-highlights/v1/highlights/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Highlight>(e));
            else
              cb(_client, ToResult<Highlight>(response));
        });
  }
}