#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPlayerBehaviorReporterFeedback.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolPlayerBehaviorReporterFeedback> GetLolPlayerBehaviorV1ReporterFeedbackById (const https::Info& _info_,
      const std::string& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-player-behavior/v1/reporter-feedback/"+to_string(id)+"?", { 
    }, { 
    }) };
  }
} 