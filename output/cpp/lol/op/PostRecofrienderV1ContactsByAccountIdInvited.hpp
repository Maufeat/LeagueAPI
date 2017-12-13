#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RecofrienderContactStateResource.hpp>
namespace lol {
  Result<RecofrienderContactStateResource> PostRecofrienderV1ContactsByAccountIdInvited(const LeagueClient& _client, const uint64_t& accountId, const std::optional<bool>& retainInCache = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RecofrienderContactStateResource> {
        _client_.request("post", "/recofriender/v1/contacts/"+to_string(accountId)+"/invited?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "retainInCache", to_string(retainInCache) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RecofrienderContactStateResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}