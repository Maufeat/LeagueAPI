#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<int32_t>> GetLolKrShutdownLawV1DisabledQueues (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-kr-shutdown-law/v1/disabled-queues?", { 
    }, { 
    }) };
  }
} 