#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LeaguesLcdsAggregatedStatsKey.hpp>
#include <lol/def/LeaguesLcdsAggregatedStat.hpp>
namespace lol {
  struct LeaguesLcdsAggregatedStats { 
    LeaguesLcdsAggregatedStatsKey key;
    std::vector<LeaguesLcdsAggregatedStat> lifetimeStatistics; 
  };
  inline void to_json(json& j, const LeaguesLcdsAggregatedStats& v) {
    j["key"] = v.key; 
    j["lifetimeStatistics"] = v.lifetimeStatistics; 
  }
  inline void from_json(const json& j, LeaguesLcdsAggregatedStats& v) {
    v.key = j.at("key").get<LeaguesLcdsAggregatedStatsKey>(); 
    v.lifetimeStatistics = j.at("lifetimeStatistics").get<std::vector<LeaguesLcdsAggregatedStat>>(); 
  }
}