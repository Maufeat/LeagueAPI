#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RankedScoutingTopChampionDTO { 
    int32_t championId;
    int32_t rank;
    int32_t winCount;
    int32_t gameCount;
    float kda; 
  };
  inline void to_json(json& j, const RankedScoutingTopChampionDTO& v) {
    j["championId"] = v.championId; 
    j["rank"] = v.rank; 
    j["winCount"] = v.winCount; 
    j["gameCount"] = v.gameCount; 
    j["kda"] = v.kda; 
  }
  inline void from_json(const json& j, RankedScoutingTopChampionDTO& v) {
    v.championId = j.at("championId").get<int32_t>(); 
    v.rank = j.at("rank").get<int32_t>(); 
    v.winCount = j.at("winCount").get<int32_t>(); 
    v.gameCount = j.at("gameCount").get<int32_t>(); 
    v.kda = j.at("kda").get<float>(); 
  }
}