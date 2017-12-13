#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> MemoryUsage(const LeagueClient& _client, const std::optional<uint32_t>& minSize = std::nullopt, const std::optional<uint32_t>& minCount = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/MemoryUsage?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "minSize", to_string(minSize) },
           { "minCount", to_string(minCount) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}