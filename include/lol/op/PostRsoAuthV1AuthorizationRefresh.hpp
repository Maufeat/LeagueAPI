#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RsoAuthAuthorization.hpp"
namespace lol {
  template<typename T>
  inline Result<RsoAuthAuthorization> PostRsoAuthV1AuthorizationRefresh(T& _client)
  {
    try {
      return ToResult<RsoAuthAuthorization>(_client.https.request("post", "/rso-auth/v1/authorization/refresh?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RsoAuthAuthorization>(e.code());
    }
  }
  template<typename T>
  inline void PostRsoAuthV1AuthorizationRefresh(T& _client, std::function<void(T&, const Result<RsoAuthAuthorization>&)> cb)
  {
    _client.httpsa.request("post", "/rso-auth/v1/authorization/refresh?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RsoAuthAuthorization>(e));
            else
              cb(_client, ToResult<RsoAuthAuthorization>(response));
        });
  }
}