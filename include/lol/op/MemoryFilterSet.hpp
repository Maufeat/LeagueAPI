#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<Nothing> MemoryFilterSet(T& _client, const std::optional<uint32_t>& minSize = std::nullopt, const std::optional<uint32_t>& maxSize = std::nullopt, const std::optional<std::string>& minAddress = std::nullopt, const std::optional<std::string>& maxAddress = std::nullopt)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/MemoryFilterSet?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "minSize", to_string(minSize) },
          { "maxSize", to_string(maxSize) },
          { "minAddress", to_string(minAddress) },
          { "maxAddress", to_string(maxAddress) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void MemoryFilterSet(T& _client, const std::optional<uint32_t>& minSize = std::nullopt, const std::optional<uint32_t>& maxSize = std::nullopt, const std::optional<std::string>& minAddress = std::nullopt, const std::optional<std::string>& maxAddress = std::nullopt, std::function<void(T&, const Result<Nothing>&)> cb)
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
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}