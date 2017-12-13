#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RsoAuthAccessToken.hpp>
namespace lol {
  Result<RsoAuthAccessToken> GetRsoAuthV1AuthorizationAccessToken(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RsoAuthAccessToken> {
        _client_.request("get", "/rso-auth/v1/authorization/access-token?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RsoAuthAccessToken> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}