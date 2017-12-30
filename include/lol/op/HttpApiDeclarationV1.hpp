#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<json> HttpApiDeclarationV1(T& _client, const std::string& api)
  {
    try {
      return ToResult<json>(_client.https.request("get", "/v1/api-docs/"+to_string(api)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void HttpApiDeclarationV1(T& _client, const std::string& api, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("get", "/v1/api-docs/"+to_string(api)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}