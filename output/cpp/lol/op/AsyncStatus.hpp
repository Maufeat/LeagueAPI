#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<json> AsyncStatus(const LeagueClient& _client, const uint32_t& asyncToken)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/AsyncStatus?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "asyncToken", to_string(asyncToken) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}