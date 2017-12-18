#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingGameflowQueue.hpp"
namespace lol {
  struct LolMatchmakingGameflowGameData { 
    LolMatchmakingGameflowQueue queue; 
  };
  inline void to_json(json& j, const LolMatchmakingGameflowGameData& v) {
    j["queue"] = v.queue; 
  }
  inline void from_json(const json& j, LolMatchmakingGameflowGameData& v) {
    v.queue = j.at("queue").get<LolMatchmakingGameflowQueue>(); 
  }
}