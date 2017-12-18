#pragma once
#include "../base_def.hpp" 
#include "LolLootLoginSummonerLevelAndPoints.hpp"
namespace lol {
  struct LolLootLoginAllSummonerData { 
    LolLootLoginSummonerLevelAndPoints summonerLevelAndPoints; 
  };
  inline void to_json(json& j, const LolLootLoginAllSummonerData& v) {
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints; 
  }
  inline void from_json(const json& j, LolLootLoginAllSummonerData& v) {
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<LolLootLoginSummonerLevelAndPoints>(); 
  }
}