#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RsoAuthAuthorization.hpp>
#include <lol/def/RsoAuthRSOPlayerCredentials.hpp>
namespace lol {
  Result<RsoAuthAuthorization> PostRsoAuthV1AuthorizationGas(const LeagueClient& _client, const RsoAuthRSOPlayerCredentials& creds)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/rso-auth/v1/authorization/gas?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(creds).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}