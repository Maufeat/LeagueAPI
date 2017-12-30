#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerStatSummary { 
    uint64_t leaves;
    uint64_t wins;
    std::string playerStatSummaryType;
    uint64_t maxRating;
    uint64_t losses;
    uint64_t rating; 
  };
  inline void to_json(json& j, const PlayerStatSummary& v) {
    j["leaves"] = v.leaves; 
    j["wins"] = v.wins; 
    j["playerStatSummaryType"] = v.playerStatSummaryType; 
    j["maxRating"] = v.maxRating; 
    j["losses"] = v.losses; 
    j["rating"] = v.rating; 
  }
  inline void from_json(const json& j, PlayerStatSummary& v) {
    v.leaves = j.at("leaves").get<uint64_t>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.playerStatSummaryType = j.at("playerStatSummaryType").get<std::string>(); 
    v.maxRating = j.at("maxRating").get<uint64_t>(); 
    v.losses = j.at("losses").get<uint64_t>(); 
    v.rating = j.at("rating").get<uint64_t>(); 
  }
}