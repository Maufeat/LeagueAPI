#pragma once
#include "../base_def.hpp" 
#include "LolClashRosterPeriodAggregatedStats.hpp"
#include "LolClashRosterPlayerAggregatedStats.hpp"
namespace lol {
  struct LolClashRosterStats { 
    std::string rosterName;
    int64_t rosterId;
    int32_t rosterIconId;
    std::string tournamentNameLocKey;
    int32_t tournamentPeriods;
    int32_t rosterIconColorId;
    std::map<std::string, LolClashRosterPlayerAggregatedStats> playerStats;
    std::vector<LolClashRosterPeriodAggregatedStats> periodStats;
    int32_t tournamentThemeId;
    std::string rosterShortName;
    int32_t tier; 
  };
  inline void to_json(json& j, const LolClashRosterStats& v) {
    j["rosterName"] = v.rosterName; 
    j["rosterId"] = v.rosterId; 
    j["rosterIconId"] = v.rosterIconId; 
    j["tournamentNameLocKey"] = v.tournamentNameLocKey; 
    j["tournamentPeriods"] = v.tournamentPeriods; 
    j["rosterIconColorId"] = v.rosterIconColorId; 
    j["playerStats"] = v.playerStats; 
    j["periodStats"] = v.periodStats; 
    j["tournamentThemeId"] = v.tournamentThemeId; 
    j["rosterShortName"] = v.rosterShortName; 
    j["tier"] = v.tier; 
  }
  inline void from_json(const json& j, LolClashRosterStats& v) {
    v.rosterName = j.at("rosterName").get<std::string>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.rosterIconId = j.at("rosterIconId").get<int32_t>(); 
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>(); 
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>(); 
    v.rosterIconColorId = j.at("rosterIconColorId").get<int32_t>(); 
    v.playerStats = j.at("playerStats").get<std::map<std::string, LolClashRosterPlayerAggregatedStats>>(); 
    v.periodStats = j.at("periodStats").get<std::vector<LolClashRosterPeriodAggregatedStats>>(); 
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>(); 
    v.rosterShortName = j.at("rosterShortName").get<std::string>(); 
    v.tier = j.at("tier").get<int32_t>(); 
  }
}