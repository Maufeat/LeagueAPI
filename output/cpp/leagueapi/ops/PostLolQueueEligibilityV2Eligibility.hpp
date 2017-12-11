#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolQueueEligibilityEligibilityQueryParams.hpp>
#include <leagueapi/definitions/LolQueueEligibilityEligibility.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolQueueEligibilityEligibility>> PostLolQueueEligibilityV2Eligibility (const https::Info& _info_,
      const LolQueueEligibilityEligibilityQueryParams& eligibilityQueryParam /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-queue-eligibility/v2/eligibility?", { 
    }, { 
    },eligibilityQueryParam) };
  }
} 