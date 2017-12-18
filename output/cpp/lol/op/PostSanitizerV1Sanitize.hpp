#pragma once
#include "../base_op.hpp" 
#include "../def/SanitizerSanitizeResponse.hpp"
#include "../def/SanitizerSanitizeRequest.hpp"
namespace lol {
  inline Result<SanitizerSanitizeResponse> PostSanitizerV1Sanitize(const LeagueClient& _client, const SanitizerSanitizeRequest& request)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<SanitizerSanitizeResponse> {
        _client_.request("post", "/sanitizer/v1/sanitize?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(request).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<SanitizerSanitizeResponse> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}