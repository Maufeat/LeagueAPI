#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RecofrienderContactPaginationResource.hpp>
namespace lol {
  Result<RecofrienderContactPaginationResource> GetRecofrienderV2ContactsPage(const LeagueClient& _client, const uint64_t& start, const uint64_t& limit)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/recofriender/v2/contacts/page?" + SimpleWeb::QueryString::create(Args2Headers({ { "start", to_string(start) },
    { "limit", to_string(limit) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}