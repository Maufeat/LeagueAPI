#pragma once
#include "../base_def.hpp" 
#include "RosterAggregatedStatsDTO.hpp"
namespace lol {
  struct RosterStatsDTO { 
    int64_t rosterId;
    int32_t tournamentThemeId;
    std::string tournamentNameLocKey;
    int32_t tournamentPeriods;
    int32_t tier;
    std::string rosterName;
    std::string rosterShortName;
    int32_t rosterLogo;
    int32_t rosterLogoColor;
    RosterAggregatedStatsDTO stats; 
  };
  inline void to_json(json& j, const RosterStatsDTO& v) {
    j["rosterId"] = v.rosterId; 
    j["tournamentThemeId"] = v.tournamentThemeId; 
    j["tournamentNameLocKey"] = v.tournamentNameLocKey; 
    j["tournamentPeriods"] = v.tournamentPeriods; 
    j["tier"] = v.tier; 
    j["rosterName"] = v.rosterName; 
    j["rosterShortName"] = v.rosterShortName; 
    j["rosterLogo"] = v.rosterLogo; 
    j["rosterLogoColor"] = v.rosterLogoColor; 
    j["stats"] = v.stats; 
  }
  inline void from_json(const json& j, RosterStatsDTO& v) {
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>(); 
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>(); 
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.rosterName = j.at("rosterName").get<std::string>(); 
    v.rosterShortName = j.at("rosterShortName").get<std::string>(); 
    v.rosterLogo = j.at("rosterLogo").get<int32_t>(); 
    v.rosterLogoColor = j.at("rosterLogoColor").get<int32_t>(); 
    v.stats = j.at("stats").get<RosterAggregatedStatsDTO>(); 
  }
}