#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderContactResource.hpp"
namespace lol {
  inline Result<RecofrienderContactResource> GetRecofrienderV2ContactsByAccountId(LeagueClient& _client, const uint64_t& accountId)
  {
    try {
      return ToResult<RecofrienderContactResource>(_client.https.request("get", "/recofriender/v2/contacts/"+to_string(accountId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RecofrienderContactResource>(e.code());
    }
  }
  inline void GetRecofrienderV2ContactsByAccountId(LeagueClient& _client, const uint64_t& accountId, std::function<void(LeagueClient&, const Result<RecofrienderContactResource>&)> cb)
  {
    _client.httpsa.request("get", "/recofriender/v2/contacts/"+to_string(accountId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RecofrienderContactResource>(e));
            else
              cb(_client, ToResult<RecofrienderContactResource>(response));
        });
  }
}