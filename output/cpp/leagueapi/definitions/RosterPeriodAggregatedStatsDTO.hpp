#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/RosterMatchAggregatedStatsDTO.hpp>

namespace leagueapi {
  struct RosterPeriodAggregatedStatsDTO { /**/ 
    int32_t bracketSize;/**/
    std::vector<RosterMatchAggregatedStatsDTO> matchStats;/**/
    int64_t time;/**/
    int32_t period;/**/
  };
  static void to_json(json& j, const RosterPeriodAggregatedStatsDTO& v) { 
    j["bracketSize"] = v.bracketSize;
    j["matchStats"] = v.matchStats;
    j["time"] = v.time;
    j["period"] = v.period;
  }
  static void from_json(const json& j, RosterPeriodAggregatedStatsDTO& v) { 
    v.bracketSize = j.at("bracketSize").get<int32_t>(); 
    v.matchStats = j.at("matchStats").get<std::vector<RosterMatchAggregatedStatsDTO>>(); 
    v.time = j.at("time").get<int64_t>(); 
    v.period = j.at("period").get<int32_t>(); 
  }
} 