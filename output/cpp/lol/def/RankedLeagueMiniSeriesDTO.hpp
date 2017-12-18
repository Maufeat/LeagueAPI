#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RankedLeagueMiniSeriesDTO { 
    uint64_t losses;
    uint64_t timeLeftToPlayMillis;
    std::string progress;
    uint64_t wins;
    uint64_t target; 
  };
  inline void to_json(json& j, const RankedLeagueMiniSeriesDTO& v) {
    j["losses"] = v.losses; 
    j["timeLeftToPlayMillis"] = v.timeLeftToPlayMillis; 
    j["progress"] = v.progress; 
    j["wins"] = v.wins; 
    j["target"] = v.target; 
  }
  inline void from_json(const json& j, RankedLeagueMiniSeriesDTO& v) {
    v.losses = j.at("losses").get<uint64_t>(); 
    v.timeLeftToPlayMillis = j.at("timeLeftToPlayMillis").get<uint64_t>(); 
    v.progress = j.at("progress").get<std::string>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.target = j.at("target").get<uint64_t>(); 
  }
}