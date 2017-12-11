#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PlayerStatSummary { /**/ 
    uint64_t maxRating;/**/
    uint64_t losses;/**/
    uint64_t wins;/**/
    uint64_t rating;/**/
    std::string playerStatSummaryType;/**/
    uint64_t leaves;/**/
  };
  static void to_json(json& j, const PlayerStatSummary& v) { 
    j["maxRating"] = v.maxRating;
    j["losses"] = v.losses;
    j["wins"] = v.wins;
    j["rating"] = v.rating;
    j["playerStatSummaryType"] = v.playerStatSummaryType;
    j["leaves"] = v.leaves;
  }
  static void from_json(const json& j, PlayerStatSummary& v) { 
    v.maxRating = j.at("maxRating").get<uint64_t>(); 
    v.losses = j.at("losses").get<uint64_t>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.rating = j.at("rating").get<uint64_t>(); 
    v.playerStatSummaryType = j.at("playerStatSummaryType").get<std::string>(); 
    v.leaves = j.at("leaves").get<uint64_t>(); 
  }
} 