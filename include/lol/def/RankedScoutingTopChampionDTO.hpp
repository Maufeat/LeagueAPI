#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RankedScoutingTopChampionDTO { 
    int32_t winCount;
    int32_t rank;
    int32_t championId;
    float kda;
    int32_t gameCount; 
  };
  inline void to_json(json& j, const RankedScoutingTopChampionDTO& v) {
    j["winCount"] = v.winCount; 
    j["rank"] = v.rank; 
    j["championId"] = v.championId; 
    j["kda"] = v.kda; 
    j["gameCount"] = v.gameCount; 
  }
  inline void from_json(const json& j, RankedScoutingTopChampionDTO& v) {
    v.winCount = j.at("winCount").get<int32_t>(); 
    v.rank = j.at("rank").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.kda = j.at("kda").get<float>(); 
    v.gameCount = j.at("gameCount").get<int32_t>(); 
  }
}