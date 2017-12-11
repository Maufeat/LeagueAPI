#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClashRosterPlayerAggregatedStats { /**/ 
    std::map<std::string, int32_t> rawStatsMax;/**/
    std::map<std::string, int32_t> rawStatsSum;/**/
  };
  static void to_json(json& j, const LolClashRosterPlayerAggregatedStats& v) { 
    j["rawStatsMax"] = v.rawStatsMax;
    j["rawStatsSum"] = v.rawStatsSum;
  }
  static void from_json(const json& j, LolClashRosterPlayerAggregatedStats& v) { 
    v.rawStatsMax = j.at("rawStatsMax").get<std::map<std::string, int32_t>>(); 
    v.rawStatsSum = j.at("rawStatsSum").get<std::map<std::string, int32_t>>(); 
  }
} 