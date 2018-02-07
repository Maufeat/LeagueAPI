#pragma once
#include "../base_def.hpp" 
#include "RosterMatchAggregatedStatsDTO.hpp"
namespace lol {
  struct RosterPeriodAggregatedStatsDTO { 
    int32_t period;
    int32_t bracketSize;
    int64_t time;
    std::vector<RosterMatchAggregatedStatsDTO> matchStats; 
  };
  inline void to_json(json& j, const RosterPeriodAggregatedStatsDTO& v) {
    j["period"] = v.period; 
    j["bracketSize"] = v.bracketSize; 
    j["time"] = v.time; 
    j["matchStats"] = v.matchStats; 
  }
  inline void from_json(const json& j, RosterPeriodAggregatedStatsDTO& v) {
    v.period = j.at("period").get<int32_t>(); 
    v.bracketSize = j.at("bracketSize").get<int32_t>(); 
    v.time = j.at("time").get<int64_t>(); 
    v.matchStats = j.at("matchStats").get<std::vector<RosterMatchAggregatedStatsDTO>>(); 
  }
}