#pragma once
#include "../base_def.hpp" 
#include "BasePublicSummonerDTO.hpp"
#include "SummonerLevelAndPoints.hpp"
namespace lol {
  struct AllPublicSummonerDataDTO { 
    BasePublicSummonerDTO summoner;
    SummonerLevelAndPoints summonerLevelAndPoints; 
  };
  inline void to_json(json& j, const AllPublicSummonerDataDTO& v) {
    j["summoner"] = v.summoner; 
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints; 
  }
  inline void from_json(const json& j, AllPublicSummonerDataDTO& v) {
    v.summoner = j.at("summoner").get<BasePublicSummonerDTO>(); 
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints>(); 
  }
}