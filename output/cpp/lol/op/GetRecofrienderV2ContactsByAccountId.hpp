#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderContactResource.hpp"
namespace lol {
  inline Result<RecofrienderContactResource> GetRecofrienderV2ContactsByAccountId(LeagueClient& _client, const uint64_t& accountId)
  {
    try {
      return Result<RecofrienderContactResource> {
        _client.https.request("get", "/recofriender/v2/contacts/"+to_string(accountId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RecofrienderContactResource> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetRecofrienderV2ContactsByAccountId(LeagueClient& _client, const uint64_t& accountId, std::function<void(LeagueClient&,const Result<RecofrienderContactResource>&)> cb)
  {
    _client.httpsa.request("get", "/recofriender/v2/contacts/"+to_string(accountId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<RecofrienderContactResource> { response });
          else
            cb(_client,Result<RecofrienderContactResource> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}