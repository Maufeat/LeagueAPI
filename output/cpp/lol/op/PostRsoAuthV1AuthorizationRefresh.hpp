#pragma once
#include "../base_op.hpp" 
#include "../def/RsoAuthAuthorization.hpp"
namespace lol {
  inline Result<RsoAuthAuthorization> PostRsoAuthV1AuthorizationRefresh(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RsoAuthAuthorization> {
        _client_.request("post", "/rso-auth/v1/authorization/refresh?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RsoAuthAuthorization> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}