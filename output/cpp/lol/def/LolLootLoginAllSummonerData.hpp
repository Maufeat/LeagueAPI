#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLootLoginSummonerLevelAndPoints.hpp>
namespace lol {
  struct LolLootLoginAllSummonerData { 
    LolLootLoginSummonerLevelAndPoints summonerLevelAndPoints; 
  };
  void to_json(json& j, const LolLootLoginAllSummonerData& v) {
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints; 
  }
  void from_json(const json& j, LolLootLoginAllSummonerData& v) {
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<LolLootLoginSummonerLevelAndPoints>(); 
  }
}