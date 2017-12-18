#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<void> MemoryFilterSet(const LeagueClient& _client, const std::optional<uint32_t>& minSize = std::nullopt, const std::optional<uint32_t>& maxSize = std::nullopt, const std::optional<std::string>& minAddress = std::nullopt, const std::optional<std::string>& maxAddress = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/MemoryFilterSet?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "minSize", to_string(minSize) },
           { "maxSize", to_string(maxSize) },
           { "minAddress", to_string(minAddress) },
           { "maxAddress", to_string(maxAddress) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}