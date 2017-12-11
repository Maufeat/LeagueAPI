#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolQueueEligibilityEligibility.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolQueueEligibilityEligibility>> GetLolQueueEligibilityV3Custom (const https::Info& _info_,
      const int32_t& teamSize /**/,
      const std::string& pickMode /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-queue-eligibility/v3/custom?", { 
      { "teamSize", https::to_string(teamSize) },
      { "pickMode", https::to_string(pickMode) },
    }, { 
    },"") };
  }
} 