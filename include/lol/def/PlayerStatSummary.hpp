#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerStatSummary { 
    std::string playerStatSummaryType;
    uint64_t rating;
    uint64_t maxRating;
    uint64_t wins;
    uint64_t losses;
    uint64_t leaves; 
  };
  inline void to_json(json& j, const PlayerStatSummary& v) {
    j["playerStatSummaryType"] = v.playerStatSummaryType; 
    j["rating"] = v.rating; 
    j["maxRating"] = v.maxRating; 
    j["wins"] = v.wins; 
    j["losses"] = v.losses; 
    j["leaves"] = v.leaves; 
  }
  inline void from_json(const json& j, PlayerStatSummary& v) {
    v.playerStatSummaryType = j.at("playerStatSummaryType").get<std::string>(); 
    v.rating = j.at("rating").get<uint64_t>(); 
    v.maxRating = j.at("maxRating").get<uint64_t>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.losses = j.at("losses").get<uint64_t>(); 
    v.leaves = j.at("leaves").get<uint64_t>(); 
  }
}