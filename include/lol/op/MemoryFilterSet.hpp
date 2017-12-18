#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::nullptr_t> MemoryFilterSet(LeagueClient& _client, const std::optional<uint32_t>& minSize = std::nullopt, const std::optional<uint32_t>& maxSize = std::nullopt, const std::optional<std::string>& minAddress = std::nullopt, const std::optional<std::string>& maxAddress = std::nullopt)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/MemoryFilterSet?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "minSize", to_string(minSize) },
          { "maxSize", to_string(maxSize) },
          { "minAddress", to_string(minAddress) },
          { "maxAddress", to_string(maxAddress) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void MemoryFilterSet(LeagueClient& _client, const std::optional<uint32_t>& minSize = std::nullopt, const std::optional<uint32_t>& maxSize = std::nullopt, const std::optional<std::string>& minAddress = std::nullopt, const std::optional<std::string>& maxAddress = std::nullopt, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
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
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}