#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashRosterPlayerAggregatedStats { 
    std::map<std::string, int32_t> rawStatsMax;
    std::map<std::string, int32_t> rawStatsSum; 
  };
  inline void to_json(json& j, const LolClashRosterPlayerAggregatedStats& v) {
    j["rawStatsMax"] = v.rawStatsMax; 
    j["rawStatsSum"] = v.rawStatsSum; 
  }
  inline void from_json(const json& j, LolClashRosterPlayerAggregatedStats& v) {
    v.rawStatsMax = j.at("rawStatsMax").get<std::map<std::string, int32_t>>(); 
    v.rawStatsSum = j.at("rawStatsSum").get<std::map<std::string, int32_t>>(); 
  }
}