#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LeaguesLcdsAggregatedStatsKey { /**/ 
    uint64_t userId;/**/
    std::string gameMode;/**/
  };
  static void to_json(json& j, const LeaguesLcdsAggregatedStatsKey& v) { 
    j["userId"] = v.userId;
    j["gameMode"] = v.gameMode;
  }
  static void from_json(const json& j, LeaguesLcdsAggregatedStatsKey& v) { 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
  }
} 