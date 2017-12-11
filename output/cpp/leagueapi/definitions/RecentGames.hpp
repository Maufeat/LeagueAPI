#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/PlayerGameStats.hpp>

namespace leagueapi {
  struct RecentGames { /**/ 
    uint64_t userId;/**/
    std::vector<PlayerGameStats> gameStatistics;/**/
  };
  static void to_json(json& j, const RecentGames& v) { 
    j["userId"] = v.userId;
    j["gameStatistics"] = v.gameStatistics;
  }
  static void from_json(const json& j, RecentGames& v) { 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.gameStatistics = j.at("gameStatistics").get<std::vector<PlayerGameStats>>(); 
  }
} 