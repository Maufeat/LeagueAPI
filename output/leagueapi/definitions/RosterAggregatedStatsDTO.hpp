#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/RosterPlayerAggregatedStatsDTO.hpp>"
#include "<leagueapi/definitions/RosterPeriodAggregatedStatsDTO.hpp>"

namespace leagueapi {
  struct RosterAggregatedStatsDTO { /**/ 
    std::map<std::string, RosterPlayerAggregatedStatsDTO> playerStats;/**/
    std::vector<RosterPeriodAggregatedStatsDTO> periodStats;/**/
  };
  static void to_json(json& j, const RosterAggregatedStatsDTO& v) { 
    j["playerStats"] = v.playerStats;
    j["periodStats"] = v.periodStats;
  }
  static void from_json(const json& j, RosterAggregatedStatsDTO& v) { 
    v.playerStats = j.at("playerStats").get<std::map<std::string, RosterPlayerAggregatedStatsDTO>>(); 
    v.periodStats = j.at("periodStats").get<std::vector<RosterPeriodAggregatedStatsDTO>>(); 
  }
} 