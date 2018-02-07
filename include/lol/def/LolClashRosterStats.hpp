#pragma once
#include "../base_def.hpp" 
#include "LolClashRosterPlayerAggregatedStats.hpp"
#include "LolClashRosterPeriodAggregatedStats.hpp"
namespace lol {
  struct LolClashRosterStats { 
    int64_t rosterId;
    int32_t tournamentThemeId;
    std::string tournamentNameLocKey;
    int32_t tournamentPeriods;
    int32_t tier;
    std::string rosterName;
    std::string rosterShortName;
    int32_t rosterIconId;
    int32_t rosterIconColorId;
    std::vector<LolClashRosterPeriodAggregatedStats> periodStats;
    std::map<std::string, LolClashRosterPlayerAggregatedStats> playerStats; 
  };
  inline void to_json(json& j, const LolClashRosterStats& v) {
    j["rosterId"] = v.rosterId; 
    j["tournamentThemeId"] = v.tournamentThemeId; 
    j["tournamentNameLocKey"] = v.tournamentNameLocKey; 
    j["tournamentPeriods"] = v.tournamentPeriods; 
    j["tier"] = v.tier; 
    j["rosterName"] = v.rosterName; 
    j["rosterShortName"] = v.rosterShortName; 
    j["rosterIconId"] = v.rosterIconId; 
    j["rosterIconColorId"] = v.rosterIconColorId; 
    j["periodStats"] = v.periodStats; 
    j["playerStats"] = v.playerStats; 
  }
  inline void from_json(const json& j, LolClashRosterStats& v) {
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>(); 
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>(); 
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.rosterName = j.at("rosterName").get<std::string>(); 
    v.rosterShortName = j.at("rosterShortName").get<std::string>(); 
    v.rosterIconId = j.at("rosterIconId").get<int32_t>(); 
    v.rosterIconColorId = j.at("rosterIconColorId").get<int32_t>(); 
    v.periodStats = j.at("periodStats").get<std::vector<LolClashRosterPeriodAggregatedStats>>(); 
    v.playerStats = j.at("playerStats").get<std::map<std::string, LolClashRosterPlayerAggregatedStats>>(); 
  }
}