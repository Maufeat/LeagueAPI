#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLeaguesLeagueChampAndStat { 
    int64_t totalGamePlayed;
    float winRate;
    int32_t championId; 
  };
  void to_json(json& j, const LolLeaguesLeagueChampAndStat& v) {
  j["totalGamePlayed"] = v.totalGamePlayed; 
  j["winRate"] = v.winRate; 
  j["championId"] = v.championId; 
  }
  void from_json(const json& j, LolLeaguesLeagueChampAndStat& v) {
  v.totalGamePlayed = j.at("totalGamePlayed").get<int64_t>(); 
  v.winRate = j.at("winRate").get<float>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  }
}