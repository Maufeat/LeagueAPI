#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPftGameflowPhase.hpp>
#include <lol/def/LolPftGameflowGameDodge.hpp>
namespace lol {
  struct LolPftGameflowSession { 
    LolPftGameflowPhase phase;
    LolPftGameflowGameDodge gameDodge; 
  };
  void to_json(json& j, const LolPftGameflowSession& v) {
  j["phase"] = v.phase; 
  j["gameDodge"] = v.gameDodge; 
  }
  void from_json(const json& j, LolPftGameflowSession& v) {
  v.phase = j.at("phase").get<LolPftGameflowPhase>(); 
  v.gameDodge = j.at("gameDodge").get<LolPftGameflowGameDodge>(); 
  }
}