#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolQueueEligibilityEligibility.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolQueueEligibilityEligibility>> GetLolQueueEligibilityV3Eligibility (const https::Info& _info_,
      const std::vector<uint64_t>& summonerIds /**/,
      const std::vector<int32_t>& queueIds /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-queue-eligibility/v3/eligibility?", { 
      { "summonerIds", to_string(summonerIds) },
      { "queueIds", to_string(queueIds) },
    }, { 
    }) };
  }
} 