#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPlayerBehaviorReporterFeedback.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolPlayerBehaviorReporterFeedback> DeleteLolPlayerBehaviorV1ReporterFeedbackById (const https::Info& _info_,
      const std::string& id /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-player-behavior/v1/reporter-feedback/"+to_string(id)+"?", { 
    }, { 
    }) };
  }
} 