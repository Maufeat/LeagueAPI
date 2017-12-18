#pragma once
#include "../base_op.hpp" 
#include "../def/RsoAuthAuthorization.hpp"
namespace lol {
  inline Result<RsoAuthAuthorization> GetRsoAuthV1Authorization(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RsoAuthAuthorization> {
        _client_.request("get", "/rso-auth/v1/authorization?" +
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