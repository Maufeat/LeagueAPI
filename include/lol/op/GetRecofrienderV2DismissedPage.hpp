#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderContactPaginationResource.hpp"
namespace lol {
  template<typename T>
  inline Result<RecofrienderContactPaginationResource> GetRecofrienderV2DismissedPage(T& _client, const uint64_t& start, const uint64_t& limit)
  {
    try {
      return ToResult<RecofrienderContactPaginationResource>(_client.https.request("get", "/recofriender/v2/dismissed/page?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "start", to_string(start) },
          { "limit", to_string(limit) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RecofrienderContactPaginationResource>(e.code());
    }
  }
  template<typename T>
  inline void GetRecofrienderV2DismissedPage(T& _client, const uint64_t& start, const uint64_t& limit, std::function<void(T&, const Result<RecofrienderContactPaginationResource>&)> cb)
  {
    _client.httpsa.request("get", "/recofriender/v2/dismissed/page?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "start", to_string(start) },
          { "limit", to_string(limit) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RecofrienderContactPaginationResource>(e));
            else
              cb(_client, ToResult<RecofrienderContactPaginationResource>(response));
        });
  }
}