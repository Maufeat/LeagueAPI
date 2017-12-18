#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/SanitizerSanitizeRequest.hpp"
#include "../def/SanitizerSanitizeResponse.hpp"
namespace lol {
  inline Result<SanitizerSanitizeResponse> PostSanitizerV1Sanitize(LeagueClient& _client, const SanitizerSanitizeRequest& request)
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
  inline void PostSanitizerV1Sanitize(LeagueClient& _client, const SanitizerSanitizeRequest& request, std::function<void(LeagueClient&, const Result<SanitizerSanitizeResponse>&)> cb)
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