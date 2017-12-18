#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolSummonerRMSLevelField.hpp>
namespace lol {
  struct LolSummonerRMSXpAndLevelMessage { 
    LolSummonerRMSLevelField level;
    json xp; 
  };
  inline void to_json(json& j, const LolSummonerRMSXpAndLevelMessage& v) {
    j["level"] = v.level; 
    j["xp"] = v.xp; 
  }
  inline void from_json(const json& j, LolSummonerRMSXpAndLevelMessage& v) {
    v.level = j.at("level").get<LolSummonerRMSLevelField>(); 
    v.xp = j.at("xp").get<json>(); 
  }
}