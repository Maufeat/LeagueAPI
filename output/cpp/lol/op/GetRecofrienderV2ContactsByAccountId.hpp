#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RecofrienderContactResource.hpp>
namespace lol {
  Result<RecofrienderContactResource> GetRecofrienderV2ContactsByAccountId(const LeagueClient& _client, const uint64_t& accountId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/recofriender/v2/contacts/"+to_string(accountId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}