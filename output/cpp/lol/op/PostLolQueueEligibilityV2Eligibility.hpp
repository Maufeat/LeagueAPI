#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolQueueEligibilityEligibility.hpp>
#include <lol/def/LolQueueEligibilityEligibilityQueryParams.hpp>
namespace lol {
  inline Result<std::vector<LolQueueEligibilityEligibility>> PostLolQueueEligibilityV2Eligibility(const LeagueClient& _client, const LolQueueEligibilityEligibilityQueryParams& eligibilityQueryParam)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolQueueEligibilityEligibility>> {
        _client_.request("post", "/lol-queue-eligibility/v2/eligibility?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(eligibilityQueryParam).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolQueueEligibilityEligibility>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}