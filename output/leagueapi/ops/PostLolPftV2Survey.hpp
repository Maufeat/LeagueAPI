#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPftPFTSurvey.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolPftV2Survey (const https::Info& _info_,
      const LolPftPFTSurvey& survey /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-pft/v2/survey?", { 
    }, { 
    },survey) };
  }
} 