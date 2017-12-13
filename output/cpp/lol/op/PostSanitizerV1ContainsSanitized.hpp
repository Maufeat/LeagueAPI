#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/SanitizerContainsSanitizedRequest.hpp>
#include <lol/def/SanitizerContainsSanitizedResponse.hpp>
namespace lol {
  Result<SanitizerContainsSanitizedResponse> PostSanitizerV1ContainsSanitized(const LeagueClient& _client, const SanitizerContainsSanitizedRequest& request)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/sanitizer/v1/containsSanitized?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(request).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}