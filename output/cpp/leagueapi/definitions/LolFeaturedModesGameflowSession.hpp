#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolFeaturedModesGameflowPhase.hpp>

namespace leagueapi {
  struct LolFeaturedModesGameflowSession { /**/ 
    LolFeaturedModesGameflowPhase phase;/**/
  };
  static void to_json(json& j, const LolFeaturedModesGameflowSession& v) { 
    j["phase"] = v.phase;
  }
  static void from_json(const json& j, LolFeaturedModesGameflowSession& v) { 
    v.phase = j.at("phase").get<LolFeaturedModesGameflowPhase>(); 
  }
} 