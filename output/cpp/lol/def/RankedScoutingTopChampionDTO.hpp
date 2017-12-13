#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RankedScoutingTopChampionDTO { 
    int32_t rank;
    int32_t winCount;
    float kda;
    int32_t gameCount;
    int32_t championId; 
  };
  void to_json(json& j, const RankedScoutingTopChampionDTO& v) {
  j["rank"] = v.rank; 
  j["winCount"] = v.winCount; 
  j["kda"] = v.kda; 
  j["gameCount"] = v.gameCount; 
  j["championId"] = v.championId; 
  }
  void from_json(const json& j, RankedScoutingTopChampionDTO& v) {
  v.rank = j.at("rank").get<int32_t>(); 
  v.winCount = j.at("winCount").get<int32_t>(); 
  v.kda = j.at("kda").get<float>(); 
  v.gameCount = j.at("gameCount").get<int32_t>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  }
}