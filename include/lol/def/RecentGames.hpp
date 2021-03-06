#pragma once
#include "../base_def.hpp" 
#include "PlayerGameStats.hpp"
namespace lol {
  struct RecentGames { 
    uint64_t userId;
    std::vector<PlayerGameStats> gameStatistics; 
  };
  inline void to_json(json& j, const RecentGames& v) {
    j["userId"] = v.userId; 
    j["gameStatistics"] = v.gameStatistics; 
  }
  inline void from_json(const json& j, RecentGames& v) {
    v.userId = j.at("userId").get<uint64_t>(); 
    v.gameStatistics = j.at("gameStatistics").get<std::vector<PlayerGameStats>>(); 
  }
}