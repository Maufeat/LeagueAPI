#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/SanitizerSanitizeResponse.hpp"
#include "../def/SanitizerSanitizeRequest.hpp"
namespace lol {
  template<typename T>
  inline Result<SanitizerSanitizeResponse> PostSanitizerV1Sanitize(T& _client, const SanitizerSanitizeRequest& request)
  {
    try {
      return ToResult<SanitizerSanitizeResponse>(_client.https.request("post", "/sanitizer/v1/sanitize?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(request).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<SanitizerSanitizeResponse>(e.code());
    }
  }
  template<typename T>
  inline void PostSanitizerV1Sanitize(T& _client, const SanitizerSanitizeRequest& request, std::function<void(T&, const Result<SanitizerSanitizeResponse>&)> cb)
  {
    _client.httpsa.request("post", "/sanitizer/v1/sanitize?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(request).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<SanitizerSanitizeResponse>(e));
            else
              cb(_client, ToResult<SanitizerSanitizeResponse>(response));
        });
  }
}