#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsAggregatedStat.hpp"
namespace lol {
  struct LeaguesLcdsChampionStatInfo { 
    int32_t totalGamesPlayed;
    int32_t championId;
    std::vector<LeaguesLcdsAggregatedStat> stats; 
  };
  inline void to_json(json& j, const LeaguesLcdsChampionStatInfo& v) {
    j["totalGamesPlayed"] = v.totalGamesPlayed; 
    j["championId"] = v.championId; 
    j["stats"] = v.stats; 
  }
  inline void from_json(const json& j, LeaguesLcdsChampionStatInfo& v) {
    v.totalGamesPlayed = j.at("totalGamesPlayed").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.stats = j.at("stats").get<std::vector<LeaguesLcdsAggregatedStat>>(); 
  }
}