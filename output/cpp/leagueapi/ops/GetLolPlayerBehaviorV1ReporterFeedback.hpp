#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPlayerBehaviorReporterFeedback.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolPlayerBehaviorReporterFeedback>> GetLolPlayerBehaviorV1ReporterFeedback (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-player-behavior/v1/reporter-feedback?", { 
    }, { 
    }) };
  }
} 