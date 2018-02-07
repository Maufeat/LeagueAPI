#pragma once
#include "../base_def.hpp" 
#include "LolPftGameflowPhase.hpp"
#include "LolPftGameflowGameDodge.hpp"
namespace lol {
  struct LolPftGameflowSession { 
    LolPftGameflowPhase phase;
    LolPftGameflowGameDodge gameDodge; 
  };
  inline void to_json(json& j, const LolPftGameflowSession& v) {
    j["phase"] = v.phase; 
    j["gameDodge"] = v.gameDodge; 
  }
  inline void from_json(const json& j, LolPftGameflowSession& v) {
    v.phase = j.at("phase").get<LolPftGameflowPhase>(); 
    v.gameDodge = j.at("gameDodge").get<LolPftGameflowGameDodge>(); 
  }
}