#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<bool> GetLolQueueEligibilityV1InitialConfigurationComplete (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-queue-eligibility/v1/initial-configuration-complete?", { 
    }, { 
    },"") };
  }
} 