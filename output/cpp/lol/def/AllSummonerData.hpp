#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PrivateSummonerDTO.hpp>
#include <lol/def/SummonerLevelAndPoints.hpp>
namespace lol {
  struct AllSummonerData { 
    PrivateSummonerDTO summoner;
    SummonerLevelAndPoints summonerLevelAndPoints; 
  };
  void to_json(json& j, const AllSummonerData& v) {
    j["summoner"] = v.summoner; 
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints; 
  }
  void from_json(const json& j, AllSummonerData& v) {
    v.summoner = j.at("summoner").get<PrivateSummonerDTO>(); 
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints>(); 
  }
}