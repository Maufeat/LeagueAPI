#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RsoAuthIdToken.hpp>
namespace lol {
  Result<RsoAuthIdToken> GetRsoAuthV1AuthorizationIdToken(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/rso-auth/v1/authorization/id-token?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}