#pragma once
#include "../base_def.hpp" 
#include "LolSummonerRMSLevelProgression.hpp"
namespace lol {
  struct LolSummonerRMSLevelField { 
    LolSummonerRMSLevelProgression progress;
    uint32_t finalLevel;
    uint32_t initialLevel; 
  };
  inline void to_json(json& j, const LolSummonerRMSLevelField& v) {
    j["progress"] = v.progress; 
    j["finalLevel"] = v.finalLevel; 
    j["initialLevel"] = v.initialLevel; 
  }
  inline void from_json(const json& j, LolSummonerRMSLevelField& v) {
    v.progress = j.at("progress").get<LolSummonerRMSLevelProgression>(); 
    v.finalLevel = j.at("finalLevel").get<uint32_t>(); 
    v.initialLevel = j.at("initialLevel").get<uint32_t>(); 
  }
}