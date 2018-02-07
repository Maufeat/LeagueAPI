#pragma once
#include "../base_def.hpp" 
#include "LolSummonerRMSLevelProgression.hpp"
namespace lol {
  struct LolSummonerRMSLevelField { 
    uint32_t initialLevel;
    uint32_t finalLevel;
    LolSummonerRMSLevelProgression progress; 
  };
  inline void to_json(json& j, const LolSummonerRMSLevelField& v) {
    j["initialLevel"] = v.initialLevel; 
    j["finalLevel"] = v.finalLevel; 
    j["progress"] = v.progress; 
  }
  inline void from_json(const json& j, LolSummonerRMSLevelField& v) {
    v.initialLevel = j.at("initialLevel").get<uint32_t>(); 
    v.finalLevel = j.at("finalLevel").get<uint32_t>(); 
    v.progress = j.at("progress").get<LolSummonerRMSLevelProgression>(); 
  }
}