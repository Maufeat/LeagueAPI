#pragma once
#include "../base_op.hpp" 
#include "../def/EntitlementsToken.hpp"
namespace lol {
  inline Result<EntitlementsToken> GetEntitlementsV1Token(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<EntitlementsToken> {
        _client_.request("get", "/entitlements/v1/token?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<EntitlementsToken> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}