#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolSummonerRMSLevelProgression.hpp>
namespace lol {
  struct LolSummonerRMSLevelField { 
    uint32_t finalLevel;
    LolSummonerRMSLevelProgression progress;
    uint32_t initialLevel; 
  };
  void to_json(json& j, const LolSummonerRMSLevelField& v) {
    j["finalLevel"] = v.finalLevel; 
    j["progress"] = v.progress; 
    j["initialLevel"] = v.initialLevel; 
  }
  void from_json(const json& j, LolSummonerRMSLevelField& v) {
    v.finalLevel = j.at("finalLevel").get<uint32_t>(); 
    v.progress = j.at("progress").get<LolSummonerRMSLevelProgression>(); 
    v.initialLevel = j.at("initialLevel").get<uint32_t>(); 
  }
}