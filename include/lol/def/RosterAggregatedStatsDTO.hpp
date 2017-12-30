#pragma once
#include "../base_def.hpp" 
#include "RosterPeriodAggregatedStatsDTO.hpp"
#include "RosterPlayerAggregatedStatsDTO.hpp"
namespace lol {
  struct RosterAggregatedStatsDTO { 
    std::vector<RosterPeriodAggregatedStatsDTO> periodStats;
    std::map<std::string, RosterPlayerAggregatedStatsDTO> playerStats; 
  };
  inline void to_json(json& j, const RosterAggregatedStatsDTO& v) {
    j["periodStats"] = v.periodStats; 
    j["playerStats"] = v.playerStats; 
  }
  inline void from_json(const json& j, RosterAggregatedStatsDTO& v) {
    v.periodStats = j.at("periodStats").get<std::vector<RosterPeriodAggregatedStatsDTO>>(); 
    v.playerStats = j.at("playerStats").get<std::map<std::string, RosterPlayerAggregatedStatsDTO>>(); 
  }
}