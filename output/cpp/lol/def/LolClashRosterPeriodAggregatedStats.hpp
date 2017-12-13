#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashRosterMatchAggregatedStats.hpp>
namespace lol {
  struct LolClashRosterPeriodAggregatedStats { 
    int32_t bracketSize;
    std::vector<LolClashRosterMatchAggregatedStats> matchStats;
    int64_t time;
    int32_t period; 
  };
  void to_json(json& j, const LolClashRosterPeriodAggregatedStats& v) {
  j["bracketSize"] = v.bracketSize; 
  j["matchStats"] = v.matchStats; 
  j["time"] = v.time; 
  j["period"] = v.period; 
  }
  void from_json(const json& j, LolClashRosterPeriodAggregatedStats& v) {
  v.bracketSize = j.at("bracketSize").get<int32_t>(); 
  v.matchStats = j.at("matchStats").get<std::vector<LolClashRosterMatchAggregatedStats>>(); 
  v.time = j.at("time").get<int64_t>(); 
  v.period = j.at("period").get<int32_t>(); 
  }
}