#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/RosterAggregatedStatsDTO.hpp>

namespace leagueapi {
  struct RosterStatsDTO { /**/ 
    int64_t rosterId;/**/
    int32_t tournamentThemeId;/**/
    std::string rosterShortName;/**/
    int32_t rosterLogoColor;/**/
    int32_t rosterLogo;/**/
    int32_t tournamentPeriods;/**/
    std::string tournamentNameLocKey;/**/
    int32_t tier;/**/
    std::string rosterName;/**/
    RosterAggregatedStatsDTO stats;/**/
  };
  static void to_json(json& j, const RosterStatsDTO& v) { 
    j["rosterId"] = v.rosterId;
    j["tournamentThemeId"] = v.tournamentThemeId;
    j["rosterShortName"] = v.rosterShortName;
    j["rosterLogoColor"] = v.rosterLogoColor;
    j["rosterLogo"] = v.rosterLogo;
    j["tournamentPeriods"] = v.tournamentPeriods;
    j["tournamentNameLocKey"] = v.tournamentNameLocKey;
    j["tier"] = v.tier;
    j["rosterName"] = v.rosterName;
    j["stats"] = v.stats;
  }
  static void from_json(const json& j, RosterStatsDTO& v) { 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>(); 
    v.rosterShortName = j.at("rosterShortName").get<std::string>(); 
    v.rosterLogoColor = j.at("rosterLogoColor").get<int32_t>(); 
    v.rosterLogo = j.at("rosterLogo").get<int32_t>(); 
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>(); 
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.rosterName = j.at("rosterName").get<std::string>(); 
    v.stats = j.at("stats").get<RosterAggregatedStatsDTO>(); 
  }
} 