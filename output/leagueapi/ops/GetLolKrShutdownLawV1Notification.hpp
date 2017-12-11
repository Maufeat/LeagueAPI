#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolKrShutdownLawShutdownLawNotification.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolKrShutdownLawShutdownLawNotification> GetLolKrShutdownLawV1Notification (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-kr-shutdown-law/v1/notification?", { 
    }, { 
    },"") };
  }
} 