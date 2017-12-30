#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<std::vector<std::string>> GetPatcherV1Products(T& _client)
  {
    try {
      return ToResult<std::vector<std::string>>(_client.https.request("get", "/patcher/v1/products?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<std::string>>(e.code());
    }
  }
  template<typename T>
  inline void GetPatcherV1Products(T& _client, std::function<void(T&, const Result<std::vector<std::string>>&)> cb)
  {
    _client.httpsa.request("get", "/patcher/v1/products?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<std::string>>(e));
            else
              cb(_client, ToResult<std::vector<std::string>>(response));
        });
  }
}