#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/BasePublicSummonerDTO.hpp>
#include <lol/def/SummonerLevelAndPoints.hpp>
namespace lol {
  struct AllPublicSummonerDataDTO { 
    BasePublicSummonerDTO summoner;
    SummonerLevelAndPoints summonerLevelAndPoints; 
  };
  void to_json(json& j, const AllPublicSummonerDataDTO& v) {
    j["summoner"] = v.summoner; 
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints; 
  }
  void from_json(const json& j, AllPublicSummonerDataDTO& v) {
    v.summoner = j.at("summoner").get<BasePublicSummonerDTO>(); 
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints>(); 
  }
}