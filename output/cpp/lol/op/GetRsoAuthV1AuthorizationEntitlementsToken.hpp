#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RsoAuthEntitlementsToken.hpp>
namespace lol {
  Result<RsoAuthEntitlementsToken> GetRsoAuthV1AuthorizationEntitlementsToken(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/rso-auth/v1/authorization/entitlements-token?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}