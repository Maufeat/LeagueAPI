#pragma once
#include "../base_def.hpp" 
#include "LolPftGameflowPhase.hpp"
#include "LolPftGameflowGameDodge.hpp"
namespace lol {
  struct LolPftGameflowSession { 
    LolPftGameflowGameDodge gameDodge;
    LolPftGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolPftGameflowSession& v) {
    j["gameDodge"] = v.gameDodge; 
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolPftGameflowSession& v) {
    v.gameDodge = j.at("gameDodge").get<LolPftGameflowGameDodge>(); 
    v.phase = j.at("phase").get<LolPftGameflowPhase>(); 
  }
}