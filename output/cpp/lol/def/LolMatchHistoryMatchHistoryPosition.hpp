#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMatchHistoryMatchHistoryPosition { 
    int16_t y;
    int16_t x; 
  };
  void to_json(json& j, const LolMatchHistoryMatchHistoryPosition& v) {
  j["y"] = v.y; 
  j["x"] = v.x; 
  }
  void from_json(const json& j, LolMatchHistoryMatchHistoryPosition& v) {
  v.y = j.at("y").get<int16_t>(); 
  v.x = j.at("x").get<int16_t>(); 
  }
}