#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsAggregatedStats.hpp"
namespace lol {
  struct LeaguesLcdsPlayerAggregatedStats { 
    uint64_t playerId;
    LeaguesLcdsAggregatedStats aggregatedStats; 
  };
  inline void to_json(json& j, const LeaguesLcdsPlayerAggregatedStats& v) {
    j["playerId"] = v.playerId; 
    j["aggregatedStats"] = v.aggregatedStats; 
  }
  inline void from_json(const json& j, LeaguesLcdsPlayerAggregatedStats& v) {
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.aggregatedStats = j.at("aggregatedStats").get<LeaguesLcdsAggregatedStats>(); 
  }
}