#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LeaguesLcdsMiniSeriesDTO { 
    uint64_t losses;
    uint64_t timeLeftToPlayMillis;
    std::string progress;
    uint64_t wins;
    uint64_t target; 
  };
  void to_json(json& j, const LeaguesLcdsMiniSeriesDTO& v) {
  j["losses"] = v.losses; 
  j["timeLeftToPlayMillis"] = v.timeLeftToPlayMillis; 
  j["progress"] = v.progress; 
  j["wins"] = v.wins; 
  j["target"] = v.target; 
  }
  void from_json(const json& j, LeaguesLcdsMiniSeriesDTO& v) {
  v.losses = j.at("losses").get<uint64_t>(); 
  v.timeLeftToPlayMillis = j.at("timeLeftToPlayMillis").get<uint64_t>(); 
  v.progress = j.at("progress").get<std::string>(); 
  v.wins = j.at("wins").get<uint64_t>(); 
  v.target = j.at("target").get<uint64_t>(); 
  }
}