#pragma once
#include "../base_def.hpp" 
#include "LolLoadoutsQueue.hpp"
namespace lol {
  struct LolLoadoutsGameflowGameData { 
    LolLoadoutsQueue queue; 
  };
  inline void to_json(json& j, const LolLoadoutsGameflowGameData& v) {
    j["queue"] = v.queue; 
  }
  inline void from_json(const json& j, LolLoadoutsGameflowGameData& v) {
    v.queue = j.at("queue").get<LolLoadoutsQueue>(); 
  }
}