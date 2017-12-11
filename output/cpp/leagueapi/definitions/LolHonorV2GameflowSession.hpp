#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolHonorV2GameflowPhase.hpp>

namespace leagueapi {
  struct LolHonorV2GameflowSession { /**/ 
    LolHonorV2GameflowPhase phase;/**/
  };
  static void to_json(json& j, const LolHonorV2GameflowSession& v) { 
    j["phase"] = v.phase;
  }
  static void from_json(const json& j, LolHonorV2GameflowSession& v) { 
    v.phase = j.at("phase").get<LolHonorV2GameflowPhase>(); 
  }
} 