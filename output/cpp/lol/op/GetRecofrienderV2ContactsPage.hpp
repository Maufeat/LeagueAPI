#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderContactPaginationResource.hpp"
namespace lol {
  inline Result<RecofrienderContactPaginationResource> GetRecofrienderV2ContactsPage(LeagueClient& _client, const uint64_t& start, const uint64_t& limit)
  {
    try {
      return Result<RecofrienderContactPaginationResource> {
        _client.https.request("get", "/recofriender/v2/contacts/page?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "start", to_string(start) },
           { "limit", to_string(limit) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RecofrienderContactPaginationResource> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetRecofrienderV2ContactsPage(LeagueClient& _client, const uint64_t& start, const uint64_t& limit, std::function<void(LeagueClient&,const Result<RecofrienderContactPaginationResource>&)> cb)
  {
    _client.httpsa.request("get", "/recofriender/v2/contacts/page?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "start", to_string(start) },
           { "limit", to_string(limit) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<RecofrienderContactPaginationResource> { response });
          else
            cb(_client,Result<RecofrienderContactPaginationResource> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}