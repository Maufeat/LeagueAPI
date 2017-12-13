#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClashRosterPlayerAggregatedStats { 
    std::map<std::string, int32_t> rawStatsSum;
    std::map<std::string, int32_t> rawStatsMax; 
  };
  void to_json(json& j, const LolClashRosterPlayerAggregatedStats& v) {
    j["rawStatsSum"] = v.rawStatsSum; 
    j["rawStatsMax"] = v.rawStatsMax; 
  }
  void from_json(const json& j, LolClashRosterPlayerAggregatedStats& v) {
    v.rawStatsSum = j.at("rawStatsSum").get<std::map<std::string, int32_t>>(); 
    v.rawStatsMax = j.at("rawStatsMax").get<std::map<std::string, int32_t>>(); 
  }
}