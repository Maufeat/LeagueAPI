#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/RosterMatchAggregatedStatsDTO.hpp>
namespace lol {
  struct RosterPeriodAggregatedStatsDTO { 
    int64_t time;
    int32_t bracketSize;
    int32_t period;
    std::vector<RosterMatchAggregatedStatsDTO> matchStats; 
  };
  inline void to_json(json& j, const RosterPeriodAggregatedStatsDTO& v) {
    j["time"] = v.time; 
    j["bracketSize"] = v.bracketSize; 
    j["period"] = v.period; 
    j["matchStats"] = v.matchStats; 
  }
  inline void from_json(const json& j, RosterPeriodAggregatedStatsDTO& v) {
    v.time = j.at("time").get<int64_t>(); 
    v.bracketSize = j.at("bracketSize").get<int32_t>(); 
    v.period = j.at("period").get<int32_t>(); 
    v.matchStats = j.at("matchStats").get<std::vector<RosterMatchAggregatedStatsDTO>>(); 
  }
}