#pragma once
#include "../base_def.hpp" 
#include "RosterAggregatedStatsDTO.hpp"
namespace lol {
  struct RosterStatsDTO { 
    std::string rosterShortName;
    int32_t tournamentPeriods;
    RosterAggregatedStatsDTO stats;
    int32_t rosterLogoColor;
    int32_t tier;
    int32_t rosterLogo;
    std::string tournamentNameLocKey;
    int64_t rosterId;
    std::string rosterName;
    int32_t tournamentThemeId; 
  };
  inline void to_json(json& j, const RosterStatsDTO& v) {
    j["rosterShortName"] = v.rosterShortName; 
    j["tournamentPeriods"] = v.tournamentPeriods; 
    j["stats"] = v.stats; 
    j["rosterLogoColor"] = v.rosterLogoColor; 
    j["tier"] = v.tier; 
    j["rosterLogo"] = v.rosterLogo; 
    j["tournamentNameLocKey"] = v.tournamentNameLocKey; 
    j["rosterId"] = v.rosterId; 
    j["rosterName"] = v.rosterName; 
    j["tournamentThemeId"] = v.tournamentThemeId; 
  }
  inline void from_json(const json& j, RosterStatsDTO& v) {
    v.rosterShortName = j.at("rosterShortName").get<std::string>(); 
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>(); 
    v.stats = j.at("stats").get<RosterAggregatedStatsDTO>(); 
    v.rosterLogoColor = j.at("rosterLogoColor").get<int32_t>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.rosterLogo = j.at("rosterLogo").get<int32_t>(); 
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.rosterName = j.at("rosterName").get<std::string>(); 
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>(); 
  }
}