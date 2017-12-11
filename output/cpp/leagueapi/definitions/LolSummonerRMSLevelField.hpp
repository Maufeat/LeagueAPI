#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolSummonerRMSLevelProgression.hpp>

namespace leagueapi {
  struct LolSummonerRMSLevelField { /**/ 
    uint32_t initialLevel;/**/
    LolSummonerRMSLevelProgression progress;/**/
    uint32_t finalLevel;/**/
  };
  static void to_json(json& j, const LolSummonerRMSLevelField& v) { 
    j["initialLevel"] = v.initialLevel;
    j["progress"] = v.progress;
    j["finalLevel"] = v.finalLevel;
  }
  static void from_json(const json& j, LolSummonerRMSLevelField& v) { 
    v.initialLevel = j.at("initialLevel").get<uint32_t>(); 
    v.progress = j.at("progress").get<LolSummonerRMSLevelProgression>(); 
    v.finalLevel = j.at("finalLevel").get<uint32_t>(); 
  }
} 