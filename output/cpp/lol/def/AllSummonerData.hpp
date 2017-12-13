#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PrivateSummonerDTO.hpp>
#include <lol/def/SummonerLevelAndPoints.hpp>
namespace lol {
  struct AllSummonerData { 
    SummonerLevelAndPoints summonerLevelAndPoints;
    PrivateSummonerDTO summoner; 
  };
  void to_json(json& j, const AllSummonerData& v) {
  j["summonerLevelAndPoints"] = v.summonerLevelAndPoints; 
  j["summoner"] = v.summoner; 
  }
  void from_json(const json& j, AllSummonerData& v) {
  v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints>(); 
  v.summoner = j.at("summoner").get<PrivateSummonerDTO>(); 
  }
}