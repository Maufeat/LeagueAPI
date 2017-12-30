#pragma once
#include "../base_def.hpp" 
#include "LolClashRosterMatchAggregatedStats.hpp"
namespace lol {
  struct LolClashRosterPeriodAggregatedStats { 
    int32_t period;
    int32_t bracketSize;
    std::vector<LolClashRosterMatchAggregatedStats> matchStats;
    int64_t time; 
  };
  inline void to_json(json& j, const LolClashRosterPeriodAggregatedStats& v) {
    j["period"] = v.period; 
    j["bracketSize"] = v.bracketSize; 
    j["matchStats"] = v.matchStats; 
    j["time"] = v.time; 
  }
  inline void from_json(const json& j, LolClashRosterPeriodAggregatedStats& v) {
    v.period = j.at("period").get<int32_t>(); 
    v.bracketSize = j.at("bracketSize").get<int32_t>(); 
    v.matchStats = j.at("matchStats").get<std::vector<LolClashRosterMatchAggregatedStats>>(); 
    v.time = j.at("time").get<int64_t>(); 
  }
}