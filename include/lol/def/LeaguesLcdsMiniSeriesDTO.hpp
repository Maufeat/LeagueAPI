#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LeaguesLcdsMiniSeriesDTO { 
    std::string progress;
    uint64_t target;
    uint64_t timeLeftToPlayMillis;
    uint64_t wins;
    uint64_t losses; 
  };
  inline void to_json(json& j, const LeaguesLcdsMiniSeriesDTO& v) {
    j["progress"] = v.progress; 
    j["target"] = v.target; 
    j["timeLeftToPlayMillis"] = v.timeLeftToPlayMillis; 
    j["wins"] = v.wins; 
    j["losses"] = v.losses; 
  }
  inline void from_json(const json& j, LeaguesLcdsMiniSeriesDTO& v) {
    v.progress = j.at("progress").get<std::string>(); 
    v.target = j.at("target").get<uint64_t>(); 
    v.timeLeftToPlayMillis = j.at("timeLeftToPlayMillis").get<uint64_t>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.losses = j.at("losses").get<uint64_t>(); 
  }
}