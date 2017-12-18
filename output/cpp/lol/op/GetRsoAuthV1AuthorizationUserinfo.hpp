#pragma once
#include "../base_op.hpp" 
#include "../def/RsoAuthUserInfo.hpp"
namespace lol {
  inline Result<RsoAuthUserInfo> GetRsoAuthV1AuthorizationUserinfo(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RsoAuthUserInfo> {
        _client_.request("get", "/rso-auth/v1/authorization/userinfo?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RsoAuthUserInfo> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}