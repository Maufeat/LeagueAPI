#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RecofrienderContactResource.hpp>
namespace lol {
  Result<std::vector<RecofrienderContactResource>> GetRecofrienderV2Contacts(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/recofriender/v2/contacts?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}