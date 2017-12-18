#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<void> MemoryFilterSet(LeagueClient& _client, const std::optional<uint32_t>& minSize = std::nullopt, const std::optional<uint32_t>& maxSize = std::nullopt, const std::optional<std::string>& minAddress = std::nullopt, const std::optional<std::string>& maxAddress = std::nullopt)
  {
    try {
      return Result<void> {
        _client.https.request("post", "/MemoryFilterSet?" +
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
      return Result<void> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void MemoryFilterSet(LeagueClient& _client, const std::optional<uint32_t>& minSize = std::nullopt, const std::optional<uint32_t>& maxSize = std::nullopt, const std::optional<std::string>& minAddress = std::nullopt, const std::optional<std::string>& maxAddress = std::nullopt, std::function<void(LeagueClient&,const Result<void>&)> cb)
  {
    _client.httpsa.request("post", "/MemoryFilterSet?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "minSize", to_string(minSize) },
           { "maxSize", to_string(maxSize) },
           { "minAddress", to_string(minAddress) },
           { "maxAddress", to_string(maxAddress) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<void> { response });
          else
            cb(_client,Result<void> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}