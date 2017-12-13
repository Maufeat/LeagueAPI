#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPlayerBehaviorGameflowPhase.hpp>
namespace lol {
  struct LolPlayerBehaviorPlayerBehavior_GameflowSessionResource { 
    LolPlayerBehaviorGameflowPhase phase; 
  };
  void to_json(json& j, const LolPlayerBehaviorPlayerBehavior_GameflowSessionResource& v) {
    j["phase"] = v.phase; 
  }
  void from_json(const json& j, LolPlayerBehaviorPlayerBehavior_GameflowSessionResource& v) {
    v.phase = j.at("phase").get<LolPlayerBehaviorGameflowPhase>(); 
  }
}