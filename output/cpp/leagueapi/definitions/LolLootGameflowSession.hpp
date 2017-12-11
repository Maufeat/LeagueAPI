#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLootGameflowPhase.hpp>

namespace leagueapi {
  struct LolLootGameflowSession { /**/ 
    LolLootGameflowPhase phase;/**/
  };
  static void to_json(json& j, const LolLootGameflowSession& v) { 
    j["phase"] = v.phase;
  }
  static void from_json(const json& j, LolLootGameflowSession& v) { 
    v.phase = j.at("phase").get<LolLootGameflowPhase>(); 
  }
} 