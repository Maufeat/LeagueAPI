#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<json> GetLolPlatformConfigV1NamespacesByNsByKey(T& _client, const std::string& ns, const std::string& key)
  {
    try {
      return ToResult<json>(_client.https.request("get", "/lol-platform-config/v1/namespaces/"+to_string(ns)+"/"+to_string(key)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void GetLolPlatformConfigV1NamespacesByNsByKey(T& _client, const std::string& ns, const std::string& key, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("get", "/lol-platform-config/v1/namespaces/"+to_string(ns)+"/"+to_string(key)+"?" +
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