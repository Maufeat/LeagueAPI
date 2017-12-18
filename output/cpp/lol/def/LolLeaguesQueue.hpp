#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLeaguesQueue { 
    json type; 
  };
  inline void to_json(json& j, const LolLeaguesQueue& v) {
    j["type"] = v.type; 
  }
  inline void from_json(const json& j, LolLeaguesQueue& v) {
    v.type = j.at("type").get<json>(); 
  }
}