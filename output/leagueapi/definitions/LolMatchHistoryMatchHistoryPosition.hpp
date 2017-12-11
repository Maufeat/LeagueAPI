#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPosition { /**/ 
    int16_t y;/**/
    int16_t x;/**/
  };
  static void to_json(json& j, const LolMatchHistoryMatchHistoryPosition& v) { 
    j["y"] = v.y;
    j["x"] = v.x;
  }
  static void from_json(const json& j, LolMatchHistoryMatchHistoryPosition& v) { 
    v.y = j.at("y").get<int16_t>(); 
    v.x = j.at("x").get<int16_t>(); 
  }
} 