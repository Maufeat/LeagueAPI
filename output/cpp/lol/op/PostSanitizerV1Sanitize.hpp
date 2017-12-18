#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/SanitizerSanitizeResponse.hpp"
#include "../def/SanitizerSanitizeRequest.hpp"
namespace lol {
  inline Result<SanitizerSanitizeResponse> PostSanitizerV1Sanitize(LeagueClient& _client, const SanitizerSanitizeRequest& request)
  {
    try {
      return Result<SanitizerSanitizeResponse> {
        _client.https.request("post", "/sanitizer/v1/sanitize?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(request).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<SanitizerSanitizeResponse> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostSanitizerV1Sanitize(LeagueClient& _client, const SanitizerSanitizeRequest& request, std::function<void(LeagueClient&,const Result<SanitizerSanitizeResponse>&)> cb)
  {
    _client.httpsa.request("post", "/sanitizer/v1/sanitize?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(request).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<SanitizerSanitizeResponse> { response });
          else
            cb(_client,Result<SanitizerSanitizeResponse> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}