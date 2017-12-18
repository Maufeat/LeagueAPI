#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolQueueEligibilityEligibilityQueryParams.hpp"
#include "../def/LolQueueEligibilityEligibility.hpp"
namespace lol {
  inline Result<std::vector<LolQueueEligibilityEligibility>> PostLolQueueEligibilityV2Eligibility(LeagueClient& _client, const LolQueueEligibilityEligibilityQueryParams& eligibilityQueryParam)
  {
    try {
      return ToResult<std::vector<LolQueueEligibilityEligibility>>(_client.https.request("post", "/lol-queue-eligibility/v2/eligibility?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(eligibilityQueryParam).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolQueueEligibilityEligibility>>(e.code());
    }
  }
  inline void PostLolQueueEligibilityV2Eligibility(LeagueClient& _client, const LolQueueEligibilityEligibilityQueryParams& eligibilityQueryParam, std::function<void(LeagueClient&, const Result<std::vector<LolQueueEligibilityEligibility>>&)> cb)
  {
    _client.httpsa.request("post", "/lol-queue-eligibility/v2/eligibility?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(eligibilityQueryParam).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolQueueEligibilityEligibility>>(e));
            else
              cb(_client, ToResult<std::vector<LolQueueEligibilityEligibility>>(response));
        });
  }
}