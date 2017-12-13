#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolEndOfGameLoginSummonerLevelAndPoints.hpp>
namespace lol {
  struct LolEndOfGameLoginSummonerData { 
    LolEndOfGameLoginSummonerLevelAndPoints summonerLevelAndPoints; 
  };
  void to_json(json& j, const LolEndOfGameLoginSummonerData& v) {
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints; 
  }
  void from_json(const json& j, LolEndOfGameLoginSummonerData& v) {
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<LolEndOfGameLoginSummonerLevelAndPoints>(); 
  }
}