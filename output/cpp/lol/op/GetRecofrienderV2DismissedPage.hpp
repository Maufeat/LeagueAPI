#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RecofrienderContactPaginationResource.hpp>
namespace lol {
  inline Result<RecofrienderContactPaginationResource> GetRecofrienderV2DismissedPage(const LeagueClient& _client, const uint64_t& start, const uint64_t& limit)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RecofrienderContactPaginationResource> {
        _client_.request("get", "/recofriender/v2/dismissed/page?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "start", to_string(start) },
           { "limit", to_string(limit) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RecofrienderContactPaginationResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}