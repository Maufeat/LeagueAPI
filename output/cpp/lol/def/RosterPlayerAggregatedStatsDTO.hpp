#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RosterPlayerAggregatedStatsDTO { 
    std::map<std::string, int32_t> rawStatsSum;
    std::map<std::string, int32_t> rawStatsMax; 
  };
  inline void to_json(json& j, const RosterPlayerAggregatedStatsDTO& v) {
    j["rawStatsSum"] = v.rawStatsSum; 
    j["rawStatsMax"] = v.rawStatsMax; 
  }
  inline void from_json(const json& j, RosterPlayerAggregatedStatsDTO& v) {
    v.rawStatsSum = j.at("rawStatsSum").get<std::map<std::string, int32_t>>(); 
    v.rawStatsMax = j.at("rawStatsMax").get<std::map<std::string, int32_t>>(); 
  }
}