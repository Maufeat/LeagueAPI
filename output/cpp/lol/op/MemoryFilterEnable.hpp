#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<void> MemoryFilterEnable(const LeagueClient& _client, const std::optional<int32_t>& enable = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/MemoryFilterEnable?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "enable", to_string(enable) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}