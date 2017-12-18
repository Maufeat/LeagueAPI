#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<std::string> PostLolLootV1Refresh(const LeagueClient& _client, const bool& force)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::string> {
        _client_.request("post", "/lol-loot/v1/refresh?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "force", to_string(force) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::string> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}