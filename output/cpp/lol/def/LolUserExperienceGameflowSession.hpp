#pragma once
#include "../base_def.hpp" 
#include "LolUserExperienceGameflowPhase.hpp"
namespace lol {
  struct LolUserExperienceGameflowSession { 
    LolUserExperienceGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolUserExperienceGameflowSession& v) {
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolUserExperienceGameflowSession& v) {
    v.phase = j.at("phase").get<LolUserExperienceGameflowPhase>(); 
  }
}