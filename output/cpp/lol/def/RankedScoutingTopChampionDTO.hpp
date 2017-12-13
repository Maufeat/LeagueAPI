#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RankedScoutingTopChampionDTO { 
    int32_t rank;
    float kda;
    int32_t winCount;
    int32_t championId;
    int32_t gameCount; 
  };
  void to_json(json& j, const RankedScoutingTopChampionDTO& v) {
  j["rank"] = v.rank; 
  j["kda"] = v.kda; 
  j["winCount"] = v.winCount; 
  j["championId"] = v.championId; 
  j["gameCount"] = v.gameCount; 
  }
  void from_json(const json& j, RankedScoutingTopChampionDTO& v) {
  v.rank = j.at("rank").get<int32_t>(); 
  v.kda = j.at("kda").get<float>(); 
  v.winCount = j.at("winCount").get<int32_t>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  v.gameCount = j.at("gameCount").get<int32_t>(); 
  }
}