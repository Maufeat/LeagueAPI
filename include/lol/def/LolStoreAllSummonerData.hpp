#pragma once
#include "../base_def.hpp" 
#include "LolStoreSummonerLevelAndPoints.hpp"
#include "LolStoreSummoner.hpp"
namespace lol {
  struct LolStoreAllSummonerData { 
    LolStoreSummoner summoner;
    LolStoreSummonerLevelAndPoints summonerLevelAndPoints; 
  };
  inline void to_json(json& j, const LolStoreAllSummonerData& v) {
    j["summoner"] = v.summoner; 
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints; 
  }
  inline void from_json(const json& j, LolStoreAllSummonerData& v) {
    v.summoner = j.at("summoner").get<LolStoreSummoner>(); 
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<LolStoreSummonerLevelAndPoints>(); 
  }
}