#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/Position.hpp>
namespace lol {
  struct LolClashSetPositionRequest { 
    Position position; 
  };
  inline void to_json(json& j, const LolClashSetPositionRequest& v) {
    j["position"] = v.position; 
  }
  inline void from_json(const json& j, LolClashSetPositionRequest& v) {
    v.position = j.at("position").get<Position>(); 
  }
}