#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LeaguesLcdsMiniSeriesDTO { /**/ 
    uint64_t target;/**/
    uint64_t wins;/**/
    std::string progress;/**/
    uint64_t timeLeftToPlayMillis;/**/
    uint64_t losses;/**/
  };
  static void to_json(json& j, const LeaguesLcdsMiniSeriesDTO& v) { 
    j["target"] = v.target;
    j["wins"] = v.wins;
    j["progress"] = v.progress;
    j["timeLeftToPlayMillis"] = v.timeLeftToPlayMillis;
    j["losses"] = v.losses;
  }
  static void from_json(const json& j, LeaguesLcdsMiniSeriesDTO& v) { 
    v.target = j.at("target").get<uint64_t>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.progress = j.at("progress").get<std::string>(); 
    v.timeLeftToPlayMillis = j.at("timeLeftToPlayMillis").get<uint64_t>(); 
    v.losses = j.at("losses").get<uint64_t>(); 
  }
} 