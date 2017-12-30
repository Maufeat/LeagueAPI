#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/SanitizerContainsSanitizedRequest.hpp"
#include "../def/SanitizerContainsSanitizedResponse.hpp"
namespace lol {
  template<typename T>
  inline Result<SanitizerContainsSanitizedResponse> PostSanitizerV1ContainsSanitized(T& _client, const SanitizerContainsSanitizedRequest& request)
  {
    try {
      return ToResult<SanitizerContainsSanitizedResponse>(_client.https.request("post", "/sanitizer/v1/containsSanitized?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(request).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<SanitizerContainsSanitizedResponse>(e.code());
    }
  }
  template<typename T>
  inline void PostSanitizerV1ContainsSanitized(T& _client, const SanitizerContainsSanitizedRequest& request, std::function<void(T&, const Result<SanitizerContainsSanitizedResponse>&)> cb)
  {
    _client.httpsa.request("post", "/sanitizer/v1/containsSanitized?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(request).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<SanitizerContainsSanitizedResponse>(e));
            else
              cb(_client, ToResult<SanitizerContainsSanitizedResponse>(response));
        });
  }
}