#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct EndOfGameStats { /**/ 
    uint64_t timeUntilNextFirstWinBonus;/**/
  };
  static void to_json(json& j, const EndOfGameStats& v) { 
    j["timeUntilNextFirstWinBonus"] = v.timeUntilNextFirstWinBonus;
  }
  static void from_json(const json& j, EndOfGameStats& v) { 
    v.timeUntilNextFirstWinBonus = j.at("timeUntilNextFirstWinBonus").get<uint64_t>(); 
  }
} 