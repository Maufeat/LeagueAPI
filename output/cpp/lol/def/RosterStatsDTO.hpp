#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/RosterAggregatedStatsDTO.hpp>
namespace lol {
  struct RosterStatsDTO { 
    int32_t rosterLogoColor;
    int32_t tournamentThemeId;
    std::string tournamentNameLocKey;
    int32_t tier;
    std::string rosterName;
    int64_t rosterId;
    int32_t tournamentPeriods;
    int32_t rosterLogo;
    RosterAggregatedStatsDTO stats;
    std::string rosterShortName; 
  };
  void to_json(json& j, const RosterStatsDTO& v) {
    j["rosterLogoColor"] = v.rosterLogoColor; 
    j["tournamentThemeId"] = v.tournamentThemeId; 
    j["tournamentNameLocKey"] = v.tournamentNameLocKey; 
    j["tier"] = v.tier; 
    j["rosterName"] = v.rosterName; 
    j["rosterId"] = v.rosterId; 
    j["tournamentPeriods"] = v.tournamentPeriods; 
    j["rosterLogo"] = v.rosterLogo; 
    j["stats"] = v.stats; 
    j["rosterShortName"] = v.rosterShortName; 
  }
  void from_json(const json& j, RosterStatsDTO& v) {
    v.rosterLogoColor = j.at("rosterLogoColor").get<int32_t>(); 
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>(); 
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.rosterName = j.at("rosterName").get<std::string>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>(); 
    v.rosterLogo = j.at("rosterLogo").get<int32_t>(); 
    v.stats = j.at("stats").get<RosterAggregatedStatsDTO>(); 
    v.rosterShortName = j.at("rosterShortName").get<std::string>(); 
  }
}