#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolClashRosterPlayerAggregatedStats.hpp>
#include <leagueapi/definitions/LolClashRosterPeriodAggregatedStats.hpp>

namespace leagueapi {
  struct LolClashRosterStats { /**/ 
    std::map<std::string, LolClashRosterPlayerAggregatedStats> playerStats;/**/
    int64_t rosterId;/**/
    int32_t tournamentThemeId;/**/
    std::string rosterShortName;/**/
    std::vector<LolClashRosterPeriodAggregatedStats> periodStats;/**/
    int32_t rosterIconId;/**/
    int32_t tournamentPeriods;/**/
    std::string tournamentNameLocKey;/**/
    int32_t rosterIconColorId;/**/
    int32_t tier;/**/
    std::string rosterName;/**/
  };
  static void to_json(json& j, const LolClashRosterStats& v) { 
    j["playerStats"] = v.playerStats;
    j["rosterId"] = v.rosterId;
    j["tournamentThemeId"] = v.tournamentThemeId;
    j["rosterShortName"] = v.rosterShortName;
    j["periodStats"] = v.periodStats;
    j["rosterIconId"] = v.rosterIconId;
    j["tournamentPeriods"] = v.tournamentPeriods;
    j["tournamentNameLocKey"] = v.tournamentNameLocKey;
    j["rosterIconColorId"] = v.rosterIconColorId;
    j["tier"] = v.tier;
    j["rosterName"] = v.rosterName;
  }
  static void from_json(const json& j, LolClashRosterStats& v) { 
    v.playerStats = j.at("playerStats").get<std::map<std::string, LolClashRosterPlayerAggregatedStats>>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>(); 
    v.rosterShortName = j.at("rosterShortName").get<std::string>(); 
    v.periodStats = j.at("periodStats").get<std::vector<LolClashRosterPeriodAggregatedStats>>(); 
    v.rosterIconId = j.at("rosterIconId").get<int32_t>(); 
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>(); 
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>(); 
    v.rosterIconColorId = j.at("rosterIconColorId").get<int32_t>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.rosterName = j.at("rosterName").get<std::string>(); 
  }
} 