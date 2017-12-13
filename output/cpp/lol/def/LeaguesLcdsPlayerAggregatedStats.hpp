#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LeaguesLcdsAggregatedStats.hpp>
namespace lol {
  struct LeaguesLcdsPlayerAggregatedStats { 
    LeaguesLcdsAggregatedStats aggregatedStats;
    uint64_t playerId; 
  };
  void to_json(json& j, const LeaguesLcdsPlayerAggregatedStats& v) {
  j["aggregatedStats"] = v.aggregatedStats; 
  j["playerId"] = v.playerId; 
  }
  void from_json(const json& j, LeaguesLcdsPlayerAggregatedStats& v) {
  v.aggregatedStats = j.at("aggregatedStats").get<LeaguesLcdsAggregatedStats>(); 
  v.playerId = j.at("playerId").get<uint64_t>(); 
  }
}