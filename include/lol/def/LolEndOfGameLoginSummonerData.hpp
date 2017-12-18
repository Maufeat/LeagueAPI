#pragma once
#include "../base_def.hpp" 
#include "LolEndOfGameLoginSummonerLevelAndPoints.hpp"
namespace lol {
  struct LolEndOfGameLoginSummonerData { 
    LolEndOfGameLoginSummonerLevelAndPoints summonerLevelAndPoints; 
  };
  inline void to_json(json& j, const LolEndOfGameLoginSummonerData& v) {
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints; 
  }
  inline void from_json(const json& j, LolEndOfGameLoginSummonerData& v) {
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<LolEndOfGameLoginSummonerLevelAndPoints>(); 
  }
}