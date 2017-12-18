#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<void> PostRiotclientAffinity(const LeagueClient& _client, const std::string& newAffinity)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/riotclient/affinity?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "newAffinity", to_string(newAffinity) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}