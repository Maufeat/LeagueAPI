#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RankedLeagueMiniSeriesDTO { 
    std::string progress;
    uint64_t wins;
    uint64_t losses;
    uint64_t target;
    uint64_t timeLeftToPlayMillis; 
  };
  inline void to_json(json& j, const RankedLeagueMiniSeriesDTO& v) {
    j["progress"] = v.progress; 
    j["wins"] = v.wins; 
    j["losses"] = v.losses; 
    j["target"] = v.target; 
    j["timeLeftToPlayMillis"] = v.timeLeftToPlayMillis; 
  }
  inline void from_json(const json& j, RankedLeagueMiniSeriesDTO& v) {
    v.progress = j.at("progress").get<std::string>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.losses = j.at("losses").get<uint64_t>(); 
    v.target = j.at("target").get<uint64_t>(); 
    v.timeLeftToPlayMillis = j.at("timeLeftToPlayMillis").get<uint64_t>(); 
  }
}