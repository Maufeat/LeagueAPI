#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPftPFTSurvey.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolPftPFTSurvey> GetLolPftV2Survey (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-pft/v2/survey?", { 
    }, { 
    }) };
  }
} 