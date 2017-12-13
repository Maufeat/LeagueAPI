#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolUserExperienceGameflowPhase.hpp>
namespace lol {
  struct LolUserExperienceGameflowSession { 
    LolUserExperienceGameflowPhase phase; 
  };
  void to_json(json& j, const LolUserExperienceGameflowSession& v) {
    j["phase"] = v.phase; 
  }
  void from_json(const json& j, LolUserExperienceGameflowSession& v) {
    v.phase = j.at("phase").get<LolUserExperienceGameflowPhase>(); 
  }
}