#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RankedScoutingTopChampionDTO { 
    float kda;
    int32_t rank;
    int32_t gameCount;
    int32_t championId;
    int32_t winCount; 
  };
  inline void to_json(json& j, const RankedScoutingTopChampionDTO& v) {
    j["kda"] = v.kda; 
    j["rank"] = v.rank; 
    j["gameCount"] = v.gameCount; 
    j["championId"] = v.championId; 
    j["winCount"] = v.winCount; 
  }
  inline void from_json(const json& j, RankedScoutingTopChampionDTO& v) {
    v.kda = j.at("kda").get<float>(); 
    v.rank = j.at("rank").get<int32_t>(); 
    v.gameCount = j.at("gameCount").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.winCount = j.at("winCount").get<int32_t>(); 
  }
}