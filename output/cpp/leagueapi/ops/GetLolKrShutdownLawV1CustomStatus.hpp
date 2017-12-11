#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolKrShutdownLawQueueShutdownStatus.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolKrShutdownLawQueueShutdownStatus> GetLolKrShutdownLawV1CustomStatus (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-kr-shutdown-law/v1/custom-status?", { 
    }, { 
    }) };
  }
} 