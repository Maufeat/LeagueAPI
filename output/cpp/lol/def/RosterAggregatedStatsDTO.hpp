#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/RosterPlayerAggregatedStatsDTO.hpp>
#include <lol/def/RosterPeriodAggregatedStatsDTO.hpp>
namespace lol {
  struct RosterAggregatedStatsDTO { 
    std::map<std::string, RosterPlayerAggregatedStatsDTO> playerStats;
    std::vector<RosterPeriodAggregatedStatsDTO> periodStats; 
  };
  void to_json(json& j, const RosterAggregatedStatsDTO& v) {
    j["playerStats"] = v.playerStats; 
    j["periodStats"] = v.periodStats; 
  }
  void from_json(const json& j, RosterAggregatedStatsDTO& v) {
    v.playerStats = j.at("playerStats").get<std::map<std::string, RosterPlayerAggregatedStatsDTO>>(); 
    v.periodStats = j.at("periodStats").get<std::vector<RosterPeriodAggregatedStatsDTO>>(); 
  }
}