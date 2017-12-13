#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashRosterPeriodAggregatedStats.hpp>
#include <lol/def/LolClashRosterPlayerAggregatedStats.hpp>
namespace lol {
  struct LolClashRosterStats { 
    std::map<std::string, LolClashRosterPlayerAggregatedStats> playerStats;
    int32_t tournamentThemeId;
    std::string tournamentNameLocKey;
    int32_t tier;
    std::string rosterName;
    int64_t rosterId;
    int32_t tournamentPeriods;
    std::vector<LolClashRosterPeriodAggregatedStats> periodStats;
    int32_t rosterIconId;
    int32_t rosterIconColorId;
    std::string rosterShortName; 
  };
  void to_json(json& j, const LolClashRosterStats& v) {
    j["playerStats"] = v.playerStats; 
    j["tournamentThemeId"] = v.tournamentThemeId; 
    j["tournamentNameLocKey"] = v.tournamentNameLocKey; 
    j["tier"] = v.tier; 
    j["rosterName"] = v.rosterName; 
    j["rosterId"] = v.rosterId; 
    j["tournamentPeriods"] = v.tournamentPeriods; 
    j["periodStats"] = v.periodStats; 
    j["rosterIconId"] = v.rosterIconId; 
    j["rosterIconColorId"] = v.rosterIconColorId; 
    j["rosterShortName"] = v.rosterShortName; 
  }
  void from_json(const json& j, LolClashRosterStats& v) {
    v.playerStats = j.at("playerStats").get<std::map<std::string, LolClashRosterPlayerAggregatedStats>>(); 
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>(); 
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.rosterName = j.at("rosterName").get<std::string>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>(); 
    v.periodStats = j.at("periodStats").get<std::vector<LolClashRosterPeriodAggregatedStats>>(); 
    v.rosterIconId = j.at("rosterIconId").get<int32_t>(); 
    v.rosterIconColorId = j.at("rosterIconColorId").get<int32_t>(); 
    v.rosterShortName = j.at("rosterShortName").get<std::string>(); 
  }
}