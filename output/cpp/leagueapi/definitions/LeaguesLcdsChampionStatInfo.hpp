#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LeaguesLcdsAggregatedStat.hpp>

namespace leagueapi {
  struct LeaguesLcdsChampionStatInfo { /**/ 
    int32_t totalGamesPlayed;/**/
    std::vector<LeaguesLcdsAggregatedStat> stats;/**/
    int32_t championId;/**/
  };
  static void to_json(json& j, const LeaguesLcdsChampionStatInfo& v) { 
    j["totalGamesPlayed"] = v.totalGamesPlayed;
    j["stats"] = v.stats;
    j["championId"] = v.championId;
  }
  static void from_json(const json& j, LeaguesLcdsChampionStatInfo& v) { 
    v.totalGamesPlayed = j.at("totalGamesPlayed").get<int32_t>(); 
    v.stats = j.at("stats").get<std::vector<LeaguesLcdsAggregatedStat>>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
} 