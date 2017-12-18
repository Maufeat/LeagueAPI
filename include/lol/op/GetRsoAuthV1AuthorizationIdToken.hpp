#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RsoAuthIdToken.hpp"
namespace lol {
  inline Result<RsoAuthIdToken> GetRsoAuthV1AuthorizationIdToken(LeagueClient& _client)
  {
    try {
      return ToResult<RsoAuthIdToken>(_client.https.request("get", "/rso-auth/v1/authorization/id-token?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RsoAuthIdToken>(e.code());
    }
  }
  inline void GetRsoAuthV1AuthorizationIdToken(LeagueClient& _client, std::function<void(LeagueClient&, const Result<RsoAuthIdToken>&)> cb)
  {
    _client.httpsa.request("get", "/rso-auth/v1/authorization/id-token?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RsoAuthIdToken>(e));
            else
              cb(_client, ToResult<RsoAuthIdToken>(response));
        });
  }
}