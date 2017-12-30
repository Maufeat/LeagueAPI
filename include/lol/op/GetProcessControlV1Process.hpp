#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/ProcessControlProcess.hpp"
namespace lol {
  template<typename T>
  inline Result<ProcessControlProcess> GetProcessControlV1Process(T& _client)
  {
    try {
      return ToResult<ProcessControlProcess>(_client.https.request("get", "/process-control/v1/process?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<ProcessControlProcess>(e.code());
    }
  }
  template<typename T>
  inline void GetProcessControlV1Process(T& _client, std::function<void(T&, const Result<ProcessControlProcess>&)> cb)
  {
    _client.httpsa.request("get", "/process-control/v1/process?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<ProcessControlProcess>(e));
            else
              cb(_client, ToResult<ProcessControlProcess>(response));
        });
  }
}