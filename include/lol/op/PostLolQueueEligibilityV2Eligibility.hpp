#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolQueueEligibilityEligibility.hpp"
#include "../def/LolQueueEligibilityEligibilityQueryParams.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolQueueEligibilityEligibility>> PostLolQueueEligibilityV2Eligibility(T& _client, const LolQueueEligibilityEligibilityQueryParams& eligibilityQueryParam)
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
  template<typename T>
  inline void PostLolQueueEligibilityV2Eligibility(T& _client, const LolQueueEligibilityEligibilityQueryParams& eligibilityQueryParam, std::function<void(T&, const Result<std::vector<LolQueueEligibilityEligibility>>&)> cb)
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