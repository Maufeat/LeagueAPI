#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<json> GetLolStoreV1ByPageType(T& _client, const std::string& pageType)
  {
    try {
      return ToResult<json>(_client.https.request("get", "/lol-store/v1/"+to_string(pageType)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void GetLolStoreV1ByPageType(T& _client, const std::string& pageType, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("get", "/lol-store/v1/"+to_string(pageType)+"?" +
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