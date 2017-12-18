#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> MemoryPools(LeagueClient& _client, const std::optional<std::string>& contextName = std::nullopt)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/MemoryPools?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "contextName", to_string(contextName) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void MemoryPools(LeagueClient& _client, const std::optional<std::string>& contextName = std::nullopt, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/MemoryPools?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "contextName", to_string(contextName) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}