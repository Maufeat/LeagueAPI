#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RsoAuthAuthorization.hpp"
#include "../def/RsoAuthRSOPlayerCredentials.hpp"
namespace lol {
  inline Result<RsoAuthAuthorization> PostRsoAuthV1AuthorizationGas(LeagueClient& _client, const RsoAuthRSOPlayerCredentials& creds)
  {
    try {
      return Result<RsoAuthAuthorization> {
        _client.https.request("post", "/rso-auth/v1/authorization/gas?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(creds).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RsoAuthAuthorization> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostRsoAuthV1AuthorizationGas(LeagueClient& _client, const RsoAuthRSOPlayerCredentials& creds, std::function<void(LeagueClient&,const Result<RsoAuthAuthorization>&)> cb)
  {
    _client.httpsa.request("post", "/rso-auth/v1/authorization/gas?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(creds).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<RsoAuthAuthorization> { response });
          else
            cb(_client,Result<RsoAuthAuthorization> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}