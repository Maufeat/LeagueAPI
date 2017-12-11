#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LeaguesLcdsAggregatedStatsKey.hpp>"
#include "<leagueapi/definitions/LeaguesLcdsAggregatedStat.hpp>"

namespace leagueapi {
  struct LeaguesLcdsAggregatedStats { /**/ 
    LeaguesLcdsAggregatedStatsKey key;/**/
    std::vector<LeaguesLcdsAggregatedStat> lifetimeStatistics;/**/
  };
  static void to_json(json& j, const LeaguesLcdsAggregatedStats& v) { 
    j["key"] = v.key;
    j["lifetimeStatistics"] = v.lifetimeStatistics;
  }
  static void from_json(const json& j, LeaguesLcdsAggregatedStats& v) { 
    v.key = j.at("key").get<LeaguesLcdsAggregatedStatsKey>(); 
    v.lifetimeStatistics = j.at("lifetimeStatistics").get<std::vector<LeaguesLcdsAggregatedStat>>(); 
  }
} 