#pragma once
#include "../base_def.hpp" 
#include "RosterAggregatedStatsDTO.hpp"
namespace lol {
  struct RosterStatsDTO { 
    std::string rosterName;
    int32_t rosterLogo;
    int64_t rosterId;
    std::string tournamentNameLocKey;
    int32_t tournamentPeriods;
    int32_t rosterLogoColor;
    int32_t tournamentThemeId;
    RosterAggregatedStatsDTO stats;
    std::string rosterShortName;
    int32_t tier; 
  };
  inline void to_json(json& j, const RosterStatsDTO& v) {
    j["rosterName"] = v.rosterName; 
    j["rosterLogo"] = v.rosterLogo; 
    j["rosterId"] = v.rosterId; 
    j["tournamentNameLocKey"] = v.tournamentNameLocKey; 
    j["tournamentPeriods"] = v.tournamentPeriods; 
    j["rosterLogoColor"] = v.rosterLogoColor; 
    j["tournamentThemeId"] = v.tournamentThemeId; 
    j["stats"] = v.stats; 
    j["rosterShortName"] = v.rosterShortName; 
    j["tier"] = v.tier; 
  }
  inline void from_json(const json& j, RosterStatsDTO& v) {
    v.rosterName = j.at("rosterName").get<std::string>(); 
    v.rosterLogo = j.at("rosterLogo").get<int32_t>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>(); 
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>(); 
    v.rosterLogoColor = j.at("rosterLogoColor").get<int32_t>(); 
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>(); 
    v.stats = j.at("stats").get<RosterAggregatedStatsDTO>(); 
    v.rosterShortName = j.at("rosterShortName").get<std::string>(); 
    v.tier = j.at("tier").get<int32_t>(); 
  }
}