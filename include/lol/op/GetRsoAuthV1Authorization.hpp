#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RsoAuthAuthorization.hpp"
namespace lol {
  template<typename T>
  inline Result<RsoAuthAuthorization> GetRsoAuthV1Authorization(T& _client)
  {
    try {
      return ToResult<RsoAuthAuthorization>(_client.https.request("get", "/rso-auth/v1/authorization?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RsoAuthAuthorization>(e.code());
    }
  }
  template<typename T>
  inline void GetRsoAuthV1Authorization(T& _client, std::function<void(T&, const Result<RsoAuthAuthorization>&)> cb)
  {
    _client.httpsa.request("get", "/rso-auth/v1/authorization?" +
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