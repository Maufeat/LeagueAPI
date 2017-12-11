#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolEsportStreamNotificationsGameflowPhase.hpp>"

namespace leagueapi {
  struct LolEsportStreamNotificationsGameflowSession { /**/ 
    LolEsportStreamNotificationsGameflowPhase phase;/**/
  };
  static void to_json(json& j, const LolEsportStreamNotificationsGameflowSession& v) { 
    j["phase"] = v.phase;
  }
  static void from_json(const json& j, LolEsportStreamNotificationsGameflowSession& v) { 
    v.phase = j.at("phase").get<LolEsportStreamNotificationsGameflowPhase>(); 
  }
} 