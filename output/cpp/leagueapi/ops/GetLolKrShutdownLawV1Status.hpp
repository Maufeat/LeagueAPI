#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolKrShutdownLawAllQueueShutdownStatus.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolKrShutdownLawAllQueueShutdownStatus> GetLolKrShutdownLawV1Status (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-kr-shutdown-law/v1/status?", { 
    }, { 
    }) };
  }
} 