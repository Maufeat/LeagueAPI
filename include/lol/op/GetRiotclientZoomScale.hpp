#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<double> GetRiotclientZoomScale(T& _client)
  {
    try {
      return ToResult<double>(_client.https.request("get", "/riotclient/zoom-scale?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<double>(e.code());
    }
  }
  template<typename T>
  inline void GetRiotclientZoomScale(T& _client, std::function<void(T&, const Result<double>&)> cb)
  {
    _client.httpsa.request("get", "/riotclient/zoom-scale?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<double>(e));
            else
              cb(_client, ToResult<double>(response));
        });
  }
}