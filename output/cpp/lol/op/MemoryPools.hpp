#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<json> MemoryPools(const LeagueClient& _client, const std::optional<std::string>& contextName = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/MemoryPools?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "contextName", to_string(contextName) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}