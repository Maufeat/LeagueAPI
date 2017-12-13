#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/BasePublicSummonerDTO.hpp>
#include <lol/def/SummonerLevelAndPoints.hpp>
namespace lol {
  struct AllPublicSummonerDataDTO { 
    SummonerLevelAndPoints summonerLevelAndPoints;
    BasePublicSummonerDTO summoner; 
  };
  void to_json(json& j, const AllPublicSummonerDataDTO& v) {
  j["summonerLevelAndPoints"] = v.summonerLevelAndPoints; 
  j["summoner"] = v.summoner; 
  }
  void from_json(const json& j, AllPublicSummonerDataDTO& v) {
  v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints>(); 
  v.summoner = j.at("summoner").get<BasePublicSummonerDTO>(); 
  }
}