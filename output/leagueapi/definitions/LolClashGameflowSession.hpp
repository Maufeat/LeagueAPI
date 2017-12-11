#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolClashGameflowPhase.hpp>"

namespace leagueapi {
  struct LolClashGameflowSession { /**/ 
    LolClashGameflowPhase phase;/**/
  };
  static void to_json(json& j, const LolClashGameflowSession& v) { 
    j["phase"] = v.phase;
  }
  static void from_json(const json& j, LolClashGameflowSession& v) { 
    v.phase = j.at("phase").get<LolClashGameflowPhase>(); 
  }
} 