#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMatchHistoryMatchHistoryPosition { 
    int16_t x;
    int16_t y; 
  };
  void to_json(json& j, const LolMatchHistoryMatchHistoryPosition& v) {
  j["x"] = v.x; 
  j["y"] = v.y; 
  }
  void from_json(const json& j, LolMatchHistoryMatchHistoryPosition& v) {
  v.x = j.at("x").get<int16_t>(); 
  v.y = j.at("y").get<int16_t>(); 
  }
}