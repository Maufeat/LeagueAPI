#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolStoreSummoner.hpp>
#include <lol/def/LolStoreSummonerLevelAndPoints.hpp>
namespace lol {
  struct LolStoreAllSummonerData { 
    LolStoreSummonerLevelAndPoints summonerLevelAndPoints;
    LolStoreSummoner summoner; 
  };
  void to_json(json& j, const LolStoreAllSummonerData& v) {
  j["summonerLevelAndPoints"] = v.summonerLevelAndPoints; 
  j["summoner"] = v.summoner; 
  }
  void from_json(const json& j, LolStoreAllSummonerData& v) {
  v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<LolStoreSummonerLevelAndPoints>(); 
  v.summoner = j.at("summoner").get<LolStoreSummoner>(); 
  }
}