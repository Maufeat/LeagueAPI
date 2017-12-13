#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolQueueEligibilityEligibilityQueryParams.hpp>
#include <lol/def/LolQueueEligibilityEligibility.hpp>
namespace lol {
  Result<std::vector<LolQueueEligibilityEligibility>> PostLolQueueEligibilityV2Eligibility(const LeagueClient& _client, const LolQueueEligibilityEligibilityQueryParams& eligibilityQueryParam)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-queue-eligibility/v2/eligibility?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(eligibilityQueryParam).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}