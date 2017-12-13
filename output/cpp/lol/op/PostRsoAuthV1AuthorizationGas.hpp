#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RsoAuthAuthorization.hpp>
#include <lol/def/RsoAuthRSOPlayerCredentials.hpp>
namespace lol {
  Result<RsoAuthAuthorization> PostRsoAuthV1AuthorizationGas(const LeagueClient& _client, const RsoAuthRSOPlayerCredentials& creds)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RsoAuthAuthorization> {
        _client_.request("post", "/rso-auth/v1/authorization/gas?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(creds).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RsoAuthAuthorization> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}