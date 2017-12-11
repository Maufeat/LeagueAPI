#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LeaguesLcdsAggregatedStats.hpp>

namespace leagueapi {
  struct LeaguesLcdsPlayerAggregatedStats { /**/ 
    uint64_t playerId;/**/
    LeaguesLcdsAggregatedStats aggregatedStats;/**/
  };
  static void to_json(json& j, const LeaguesLcdsPlayerAggregatedStats& v) { 
    j["playerId"] = v.playerId;
    j["aggregatedStats"] = v.aggregatedStats;
  }
  static void from_json(const json& j, LeaguesLcdsPlayerAggregatedStats& v) { 
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.aggregatedStats = j.at("aggregatedStats").get<LeaguesLcdsAggregatedStats>(); 
  }
} 