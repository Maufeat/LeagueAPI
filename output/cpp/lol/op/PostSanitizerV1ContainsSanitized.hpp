#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/SanitizerContainsSanitizedResponse.hpp"
#include "../def/SanitizerContainsSanitizedRequest.hpp"
namespace lol {
  inline Result<SanitizerContainsSanitizedResponse> PostSanitizerV1ContainsSanitized(LeagueClient& _client, const SanitizerContainsSanitizedRequest& request)
  {
    try {
      return Result<SanitizerContainsSanitizedResponse> {
        _client.https.request("post", "/sanitizer/v1/containsSanitized?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(request).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<SanitizerContainsSanitizedResponse> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostSanitizerV1ContainsSanitized(LeagueClient& _client, const SanitizerContainsSanitizedRequest& request, std::function<void(LeagueClient&,const Result<SanitizerContainsSanitizedResponse>&)> cb)
  {
    _client.httpsa.request("post", "/sanitizer/v1/containsSanitized?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(request).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<SanitizerContainsSanitizedResponse> { response });
          else
            cb(_client,Result<SanitizerContainsSanitizedResponse> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}