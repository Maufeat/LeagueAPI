#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolMissionsGameflowPhase.hpp>"

namespace leagueapi {
  struct LolMissionsGameflowSession { /**/ 
    LolMissionsGameflowPhase phase;/**/
  };
  static void to_json(json& j, const LolMissionsGameflowSession& v) { 
    j["phase"] = v.phase;
  }
  static void from_json(const json& j, LolMissionsGameflowSession& v) { 
    v.phase = j.at("phase").get<LolMissionsGameflowPhase>(); 
  }
} 