#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolUserExperienceGameflowPhase.hpp>

namespace leagueapi {
  struct LolUserExperienceGameflowSession { /**/ 
    LolUserExperienceGameflowPhase phase;/**/
  };
  static void to_json(json& j, const LolUserExperienceGameflowSession& v) { 
    j["phase"] = v.phase;
  }
  static void from_json(const json& j, LolUserExperienceGameflowSession& v) { 
    v.phase = j.at("phase").get<LolUserExperienceGameflowPhase>(); 
  }
} 