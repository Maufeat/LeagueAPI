#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderContactStateResource.hpp"
namespace lol {
  inline Result<RecofrienderContactStateResource> PostRecofrienderV1ContactsByAccountIdInvited(LeagueClient& _client, const uint64_t& accountId, const std::optional<bool>& retainInCache = std::nullopt)
  {
    try {
      return ToResult<RecofrienderContactStateResource>(_client.https.request("post", "/recofriender/v1/contacts/"+to_string(accountId)+"/invited?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "retainInCache", to_string(retainInCache) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RecofrienderContactStateResource>(e.code());
    }
  }
  inline void PostRecofrienderV1ContactsByAccountIdInvited(LeagueClient& _client, const uint64_t& accountId, const std::optional<bool>& retainInCache = std::nullopt, std::function<void(LeagueClient&, const Result<RecofrienderContactStateResource>&)> cb)
  {
    _client.httpsa.request("post", "/recofriender/v1/contacts/"+to_string(accountId)+"/invited?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "retainInCache", to_string(retainInCache) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RecofrienderContactStateResource>(e));
            else
              cb(_client, ToResult<RecofrienderContactStateResource>(response));
        });
  }
}