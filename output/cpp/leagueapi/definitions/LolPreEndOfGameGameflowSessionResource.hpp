#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolPreEndOfGameGameflowPhase.hpp>

namespace leagueapi {
  struct LolPreEndOfGameGameflowSessionResource { /**/ 
    LolPreEndOfGameGameflowPhase phase;/**/
  };
  static void to_json(json& j, const LolPreEndOfGameGameflowSessionResource& v) { 
    j["phase"] = v.phase;
  }
  static void from_json(const json& j, LolPreEndOfGameGameflowSessionResource& v) { 
    v.phase = j.at("phase").get<LolPreEndOfGameGameflowPhase>(); 
  }
} 