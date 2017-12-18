#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsAggregatedStats.hpp"
namespace lol {
  struct LeaguesLcdsPlayerAggregatedStats { 
    LeaguesLcdsAggregatedStats aggregatedStats;
    uint64_t playerId; 
  };
  inline void to_json(json& j, const LeaguesLcdsPlayerAggregatedStats& v) {
    j["aggregatedStats"] = v.aggregatedStats; 
    j["playerId"] = v.playerId; 
  }
  inline void from_json(const json& j, LeaguesLcdsPlayerAggregatedStats& v) {
    v.aggregatedStats = j.at("aggregatedStats").get<LeaguesLcdsAggregatedStats>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
  }
}