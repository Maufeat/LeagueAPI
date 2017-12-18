#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> MemoryUsage(LeagueClient& _client, const std::optional<uint32_t>& minSize = std::nullopt, const std::optional<uint32_t>& minCount = std::nullopt)
  {
    try {
      return Result<json> {
        _client.https.request("post", "/MemoryUsage?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "minSize", to_string(minSize) },
           { "minCount", to_string(minCount) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void MemoryUsage(LeagueClient& _client, const std::optional<uint32_t>& minSize = std::nullopt, const std::optional<uint32_t>& minCount = std::nullopt, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/MemoryUsage?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "minSize", to_string(minSize) },
           { "minCount", to_string(minCount) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<json> { response });
          else
            cb(_client,Result<json> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}