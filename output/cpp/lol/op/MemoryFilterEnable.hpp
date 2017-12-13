#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> MemoryFilterEnable(const LeagueClient& _client, const std::optional<int32_t>& enable = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/MemoryFilterEnable?" + SimpleWeb::QueryString::create(Args2Headers({ { "enable", to_string(enable) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}