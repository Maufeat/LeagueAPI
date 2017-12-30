#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/EntitlementsToken.hpp"
namespace lol {
  template<typename T>
  inline Result<EntitlementsToken> GetEntitlementsV1Token(T& _client)
  {
    try {
      return ToResult<EntitlementsToken>(_client.https.request("get", "/entitlements/v1/token?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<EntitlementsToken>(e.code());
    }
  }
  template<typename T>
  inline void GetEntitlementsV1Token(T& _client, std::function<void(T&, const Result<EntitlementsToken>&)> cb)
  {
    _client.httpsa.request("get", "/entitlements/v1/token?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<EntitlementsToken>(e));
            else
              cb(_client, ToResult<EntitlementsToken>(response));
        });
  }
}