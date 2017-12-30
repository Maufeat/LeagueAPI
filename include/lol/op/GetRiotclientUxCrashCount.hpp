#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<uint32_t> GetRiotclientUxCrashCount(T& _client)
  {
    try {
      return ToResult<uint32_t>(_client.https.request("get", "/riotclient/ux-crash-count?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<uint32_t>(e.code());
    }
  }
  template<typename T>
  inline void GetRiotclientUxCrashCount(T& _client, std::function<void(T&, const Result<uint32_t>&)> cb)
  {
    _client.httpsa.request("get", "/riotclient/ux-crash-count?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<uint32_t>(e));
            else
              cb(_client, ToResult<uint32_t>(response));
        });
  }
}