#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RsoAuthEntitlementsToken.hpp>
namespace lol {
  inline Result<RsoAuthEntitlementsToken> GetRsoAuthV1AuthorizationEntitlementsToken(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RsoAuthEntitlementsToken> {
        _client_.request("get", "/rso-auth/v1/authorization/entitlements-token?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RsoAuthEntitlementsToken> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}