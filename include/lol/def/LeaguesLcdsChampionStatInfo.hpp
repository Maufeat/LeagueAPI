#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsAggregatedStat.hpp"
namespace lol {
  struct LeaguesLcdsChampionStatInfo { 
    int32_t championId;
    std::vector<LeaguesLcdsAggregatedStat> stats;
    int32_t totalGamesPlayed; 
  };
  inline void to_json(json& j, const LeaguesLcdsChampionStatInfo& v) {
    j["championId"] = v.championId; 
    j["stats"] = v.stats; 
    j["totalGamesPlayed"] = v.totalGamesPlayed; 
  }
  inline void from_json(const json& j, LeaguesLcdsChampionStatInfo& v) {
    v.championId = j.at("championId").get<int32_t>(); 
    v.stats = j.at("stats").get<std::vector<LeaguesLcdsAggregatedStat>>(); 
    v.totalGamesPlayed = j.at("totalGamesPlayed").get<int32_t>(); 
  }
}