#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashRosterMatchAggregatedStats.hpp>
namespace lol {
  struct LolClashRosterPeriodAggregatedStats { 
    int64_t time;
    int32_t bracketSize;
    int32_t period;
    std::vector<LolClashRosterMatchAggregatedStats> matchStats; 
  };
  void to_json(json& j, const LolClashRosterPeriodAggregatedStats& v) {
  j["time"] = v.time; 
  j["bracketSize"] = v.bracketSize; 
  j["period"] = v.period; 
  j["matchStats"] = v.matchStats; 
  }
  void from_json(const json& j, LolClashRosterPeriodAggregatedStats& v) {
  v.time = j.at("time").get<int64_t>(); 
  v.bracketSize = j.at("bracketSize").get<int32_t>(); 
  v.period = j.at("period").get<int32_t>(); 
  v.matchStats = j.at("matchStats").get<std::vector<LolClashRosterMatchAggregatedStats>>(); 
  }
}