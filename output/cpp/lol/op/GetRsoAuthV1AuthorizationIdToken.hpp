#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RsoAuthIdToken.hpp"
namespace lol {
  inline Result<RsoAuthIdToken> GetRsoAuthV1AuthorizationIdToken(LeagueClient& _client)
  {
    try {
      return Result<RsoAuthIdToken> {
        _client.https.request("get", "/rso-auth/v1/authorization/id-token?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RsoAuthIdToken> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetRsoAuthV1AuthorizationIdToken(LeagueClient& _client, std::function<void(LeagueClient&,const Result<RsoAuthIdToken>&)> cb)
  {
    _client.httpsa.request("get", "/rso-auth/v1/authorization/id-token?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<RsoAuthIdToken> { response });
          else
            cb(_client,Result<RsoAuthIdToken> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}