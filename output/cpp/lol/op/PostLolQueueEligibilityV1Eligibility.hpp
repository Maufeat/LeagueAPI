#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolQueueEligibilityEligibilityQueryParams.hpp"
#include "../def/LolQueueEligibilityEligibility.hpp"
namespace lol {
  inline Result<std::vector<LolQueueEligibilityEligibility>> PostLolQueueEligibilityV1Eligibility(LeagueClient& _client, const LolQueueEligibilityEligibilityQueryParams& eligibilityQueryParam)
  {
    try {
      return Result<std::vector<LolQueueEligibilityEligibility>> {
        _client.https.request("post", "/lol-queue-eligibility/v1/eligibility?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(eligibilityQueryParam).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolQueueEligibilityEligibility>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolQueueEligibilityV1Eligibility(LeagueClient& _client, const LolQueueEligibilityEligibilityQueryParams& eligibilityQueryParam, std::function<void(LeagueClient&,const Result<std::vector<LolQueueEligibilityEligibility>>&)> cb)
  {
    _client.httpsa.request("post", "/lol-queue-eligibility/v1/eligibility?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(eligibilityQueryParam).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolQueueEligibilityEligibility>> { response });
          else
            cb(_client,Result<std::vector<LolQueueEligibilityEligibility>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}