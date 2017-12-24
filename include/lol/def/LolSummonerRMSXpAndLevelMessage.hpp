#pragma once
#include "../base_def.hpp" 
#include "LolSummonerRMSLevelField.hpp"
namespace lol {
  struct LolSummonerRMSXpAndLevelMessage { 
    json xp;
    LolSummonerRMSLevelField level; 
  };
  inline void to_json(json& j, const LolSummonerRMSXpAndLevelMessage& v) {
    j["xp"] = v.xp; 
    j["level"] = v.level; 
  }
  inline void from_json(const json& j, LolSummonerRMSXpAndLevelMessage& v) {
    v.xp = j.at("xp").get<json>(); 
    v.level = j.at("level").get<LolSummonerRMSLevelField>(); 
  }
}