#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolSimpleDialogMessagesGameflowPhase.hpp>

namespace leagueapi {
  struct LolSimpleDialogMessagesGameflowSession { /**/ 
    LolSimpleDialogMessagesGameflowPhase phase;/**/
  };
  static void to_json(json& j, const LolSimpleDialogMessagesGameflowSession& v) { 
    j["phase"] = v.phase;
  }
  static void from_json(const json& j, LolSimpleDialogMessagesGameflowSession& v) { 
    v.phase = j.at("phase").get<LolSimpleDialogMessagesGameflowPhase>(); 
  }
} 