#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RsoAuthAccessToken.hpp"
namespace lol {
  inline Result<RsoAuthAccessToken> GetRsoAuthV1AuthorizationAccessToken(LeagueClient& _client)
  {
    try {
      return Result<RsoAuthAccessToken> {
        _client.https.request("get", "/rso-auth/v1/authorization/access-token?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RsoAuthAccessToken> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetRsoAuthV1AuthorizationAccessToken(LeagueClient& _client, std::function<void(LeagueClient&,const Result<RsoAuthAccessToken>&)> cb)
  {
    _client.httpsa.request("get", "/rso-auth/v1/authorization/access-token?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<RsoAuthAccessToken> { response });
          else
            cb(_client,Result<RsoAuthAccessToken> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}