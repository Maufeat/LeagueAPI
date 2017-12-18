#pragma once
#include "../base_def.hpp" 
#include "LolPlayerBehaviorGameflowPhase.hpp"
namespace lol {
  struct LolPlayerBehaviorPlayerBehavior_GameflowSessionResource { 
    LolPlayerBehaviorGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolPlayerBehaviorPlayerBehavior_GameflowSessionResource& v) {
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolPlayerBehaviorPlayerBehavior_GameflowSessionResource& v) {
    v.phase = j.at("phase").get<LolPlayerBehaviorGameflowPhase>(); 
  }
}