#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLoadoutsQueue.hpp>
namespace lol {
  struct LolLoadoutsGameflowGameData { 
    LolLoadoutsQueue queue; 
  };
  void to_json(json& j, const LolLoadoutsGameflowGameData& v) {
    j["queue"] = v.queue; 
  }
  void from_json(const json& j, LolLoadoutsGameflowGameData& v) {
    v.queue = j.at("queue").get<LolLoadoutsQueue>(); 
  }
}