#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/SanitizerContainsSanitizedRequest.hpp>
#include <lol/def/SanitizerContainsSanitizedResponse.hpp>
namespace lol {
  inline Result<SanitizerContainsSanitizedResponse> PostSanitizerV1ContainsSanitized(const LeagueClient& _client, const SanitizerContainsSanitizedRequest& request)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<SanitizerContainsSanitizedResponse> {
        _client_.request("post", "/sanitizer/v1/containsSanitized?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(request).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<SanitizerContainsSanitizedResponse> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}