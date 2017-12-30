#pragma once
#include "../base_def.hpp" 
#include "LolSummonerRMSLevelProgression.hpp"
namespace lol {
  struct LolSummonerRMSLevelField { 
    uint32_t initialLevel;
    LolSummonerRMSLevelProgression progress;
    uint32_t finalLevel; 
  };
  inline void to_json(json& j, const LolSummonerRMSLevelField& v) {
    j["initialLevel"] = v.initialLevel; 
    j["progress"] = v.progress; 
    j["finalLevel"] = v.finalLevel; 
  }
  inline void from_json(const json& j, LolSummonerRMSLevelField& v) {
    v.initialLevel = j.at("initialLevel").get<uint32_t>(); 
    v.progress = j.at("progress").get<LolSummonerRMSLevelProgression>(); 
    v.finalLevel = j.at("finalLevel").get<uint32_t>(); 
  }
}