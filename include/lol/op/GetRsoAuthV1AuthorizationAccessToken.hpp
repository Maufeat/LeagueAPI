#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RsoAuthAccessToken.hpp"
namespace lol {
  template<typename T>
  inline Result<RsoAuthAccessToken> GetRsoAuthV1AuthorizationAccessToken(T& _client)
  {
    try {
      return ToResult<RsoAuthAccessToken>(_client.https.request("get", "/rso-auth/v1/authorization/access-token?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RsoAuthAccessToken>(e.code());
    }
  }
  template<typename T>
  inline void GetRsoAuthV1AuthorizationAccessToken(T& _client, std::function<void(T&, const Result<RsoAuthAccessToken>&)> cb)
  {
    _client.httpsa.request("get", "/rso-auth/v1/authorization/access-token?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RsoAuthAccessToken>(e));
            else
              cb(_client, ToResult<RsoAuthAccessToken>(response));
        });
  }
}