#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<uint64_t> GetTelemetryV1ApplicationStartTime(T& _client)
  {
    try {
      return ToResult<uint64_t>(_client.https.request("get", "/telemetry/v1/application-start-time?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<uint64_t>(e.code());
    }
  }
  template<typename T>
  inline void GetTelemetryV1ApplicationStartTime(T& _client, std::function<void(T&, const Result<uint64_t>&)> cb)
  {
    _client.httpsa.request("get", "/telemetry/v1/application-start-time?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<uint64_t>(e));
            else
              cb(_client, ToResult<uint64_t>(response));
        });
  }
}