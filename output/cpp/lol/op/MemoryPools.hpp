#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> MemoryPools(const LeagueClient& _client, const std::optional<std::string>& contextName = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/MemoryPools?" + SimpleWeb::QueryString::create(Args2Headers({ { "contextName", to_string(contextName) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}