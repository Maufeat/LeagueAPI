#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLeaguesLeagueChampAndStat { 
    float winRate;
    int64_t totalGamePlayed;
    int32_t championId; 
  };
  void to_json(json& j, const LolLeaguesLeagueChampAndStat& v) {
    j["winRate"] = v.winRate; 
    j["totalGamePlayed"] = v.totalGamePlayed; 
    j["championId"] = v.championId; 
  }
  void from_json(const json& j, LolLeaguesLeagueChampAndStat& v) {
    v.winRate = j.at("winRate").get<float>(); 
    v.totalGamePlayed = j.at("totalGamePlayed").get<int64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
}