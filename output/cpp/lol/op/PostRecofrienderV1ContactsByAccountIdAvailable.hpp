#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RecofrienderContactStateResource.hpp>
namespace lol {
  Result<RecofrienderContactStateResource> PostRecofrienderV1ContactsByAccountIdAvailable(const LeagueClient& _client, const uint64_t& accountId, const std::optional<bool>& retainInCache = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/recofriender/v1/contacts/"+to_string(accountId)+"/available?" + SimpleWeb::QueryString::create(Args2Headers({ { "retainInCache", to_string(retainInCache) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}