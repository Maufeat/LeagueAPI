#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> MemoryFilterSet(const LeagueClient& _client, const std::optional<uint32_t>& minSize = std::nullopt, const std::optional<uint32_t>& maxSize = std::nullopt, const std::optional<std::string>& minAddress = std::nullopt, const std::optional<std::string>& maxAddress = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/MemoryFilterSet?" + SimpleWeb::QueryString::create(Args2Headers({ { "minSize", to_string(minSize) },
    { "maxSize", to_string(maxSize) },
    { "minAddress", to_string(minAddress) },
    { "maxAddress", to_string(maxAddress) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}