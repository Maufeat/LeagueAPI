#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> Unsubscribe(const LeagueClient& _client, const std::string& eventName)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/Unsubscribe?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "eventName", to_string(eventName) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}