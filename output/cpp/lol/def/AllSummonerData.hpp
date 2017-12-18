#pragma once
#include "../base_def.hpp" 
#include "SummonerLevelAndPoints.hpp"
#include "PrivateSummonerDTO.hpp"
namespace lol {
  struct AllSummonerData { 
    PrivateSummonerDTO summoner;
    SummonerLevelAndPoints summonerLevelAndPoints; 
  };
  inline void to_json(json& j, const AllSummonerData& v) {
    j["summoner"] = v.summoner; 
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints; 
  }
  inline void from_json(const json& j, AllSummonerData& v) {
    v.summoner = j.at("summoner").get<PrivateSummonerDTO>(); 
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints>(); 
  }
}