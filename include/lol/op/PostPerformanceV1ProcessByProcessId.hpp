#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<Nothing> PostPerformanceV1ProcessByProcessId(T& _client, const uint32_t& processId)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/performance/v1/process/"+to_string(processId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PostPerformanceV1ProcessByProcessId(T& _client, const uint32_t& processId, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/performance/v1/process/"+to_string(processId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}