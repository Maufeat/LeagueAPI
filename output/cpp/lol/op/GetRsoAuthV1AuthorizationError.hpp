#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RsoAuthAuthError.hpp>
namespace lol {
  inline Result<RsoAuthAuthError> GetRsoAuthV1AuthorizationError(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RsoAuthAuthError> {
        _client_.request("get", "/rso-auth/v1/authorization/error?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RsoAuthAuthError> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}