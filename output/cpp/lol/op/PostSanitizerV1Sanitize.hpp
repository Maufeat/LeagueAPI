#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/SanitizerSanitizeResponse.hpp>
#include <lol/def/SanitizerSanitizeRequest.hpp>
namespace lol {
  Result<SanitizerSanitizeResponse> PostSanitizerV1Sanitize(const LeagueClient& _client, const SanitizerSanitizeRequest& request)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/sanitizer/v1/sanitize?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(request).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}