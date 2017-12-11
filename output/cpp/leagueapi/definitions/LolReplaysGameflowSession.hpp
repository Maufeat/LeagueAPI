#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolReplaysGameflowGameClient.hpp>
#include <leagueapi/definitions/LolReplaysGameflowPhase.hpp>

namespace leagueapi {
  struct LolReplaysGameflowSession { /**/ 
    LolReplaysGameflowPhase phase;/**/
    LolReplaysGameflowGameClient gameClient;/**/
  };
  static void to_json(json& j, const LolReplaysGameflowSession& v) { 
    j["phase"] = v.phase;
    j["gameClient"] = v.gameClient;
  }
  static void from_json(const json& j, LolReplaysGameflowSession& v) { 
    v.phase = j.at("phase").get<LolReplaysGameflowPhase>(); 
    v.gameClient = j.at("gameClient").get<LolReplaysGameflowGameClient>(); 
  }
} 