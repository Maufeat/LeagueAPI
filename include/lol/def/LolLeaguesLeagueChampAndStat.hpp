#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLeaguesLeagueChampAndStat { 
    int32_t championId;
    int64_t totalGamePlayed;
    float winRate; 
  };
  inline void to_json(json& j, const LolLeaguesLeagueChampAndStat& v) {
    j["championId"] = v.championId; 
    j["totalGamePlayed"] = v.totalGamePlayed; 
    j["winRate"] = v.winRate; 
  }
  inline void from_json(const json& j, LolLeaguesLeagueChampAndStat& v) {
    v.championId = j.at("championId").get<int32_t>(); 
    v.totalGamePlayed = j.at("totalGamePlayed").get<int64_t>(); 
    v.winRate = j.at("winRate").get<float>(); 
  }
}