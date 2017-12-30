#pragma once
#include "../base_def.hpp" 
#include "LolClashRosterPeriodAggregatedStats.hpp"
#include "LolClashRosterPlayerAggregatedStats.hpp"
namespace lol {
  struct LolClashRosterStats { 
    std::string rosterShortName;
    int32_t tournamentPeriods;
    int32_t rosterIconColorId;
    std::map<std::string, LolClashRosterPlayerAggregatedStats> playerStats;
    int32_t rosterIconId;
    int32_t tier;
    std::vector<LolClashRosterPeriodAggregatedStats> periodStats;
    std::string tournamentNameLocKey;
    int64_t rosterId;
    std::string rosterName;
    int32_t tournamentThemeId; 
  };
  inline void to_json(json& j, const LolClashRosterStats& v) {
    j["rosterShortName"] = v.rosterShortName; 
    j["tournamentPeriods"] = v.tournamentPeriods; 
    j["rosterIconColorId"] = v.rosterIconColorId; 
    j["playerStats"] = v.playerStats; 
    j["rosterIconId"] = v.rosterIconId; 
    j["tier"] = v.tier; 
    j["periodStats"] = v.periodStats; 
    j["tournamentNameLocKey"] = v.tournamentNameLocKey; 
    j["rosterId"] = v.rosterId; 
    j["rosterName"] = v.rosterName; 
    j["tournamentThemeId"] = v.tournamentThemeId; 
  }
  inline void from_json(const json& j, LolClashRosterStats& v) {
    v.rosterShortName = j.at("rosterShortName").get<std::string>(); 
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>(); 
    v.rosterIconColorId = j.at("rosterIconColorId").get<int32_t>(); 
    v.playerStats = j.at("playerStats").get<std::map<std::string, LolClashRosterPlayerAggregatedStats>>(); 
    v.rosterIconId = j.at("rosterIconId").get<int32_t>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.periodStats = j.at("periodStats").get<std::vector<LolClashRosterPeriodAggregatedStats>>(); 
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.rosterName = j.at("rosterName").get<std::string>(); 
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>(); 
  }
}