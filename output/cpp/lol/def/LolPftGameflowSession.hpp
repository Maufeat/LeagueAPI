#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPftGameflowGameDodge.hpp>
#include <lol/def/LolPftGameflowPhase.hpp>
namespace lol {
  struct LolPftGameflowSession { 
    LolPftGameflowGameDodge gameDodge;
    LolPftGameflowPhase phase; 
  };
  void to_json(json& j, const LolPftGameflowSession& v) {
  j["gameDodge"] = v.gameDodge; 
  j["phase"] = v.phase; 
  }
  void from_json(const json& j, LolPftGameflowSession& v) {
  v.gameDodge = j.at("gameDodge").get<LolPftGameflowGameDodge>(); 
  v.phase = j.at("phase").get<LolPftGameflowPhase>(); 
  }
}