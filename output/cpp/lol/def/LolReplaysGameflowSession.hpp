#pragma once
#include "../base_def.hpp" 
#include "LolReplaysGameflowGameClient.hpp"
#include "LolReplaysGameflowPhase.hpp"
namespace lol {
  struct LolReplaysGameflowSession { 
    LolReplaysGameflowPhase phase;
    LolReplaysGameflowGameClient gameClient; 
  };
  inline void to_json(json& j, const LolReplaysGameflowSession& v) {
    j["phase"] = v.phase; 
    j["gameClient"] = v.gameClient; 
  }
  inline void from_json(const json& j, LolReplaysGameflowSession& v) {
    v.phase = j.at("phase").get<LolReplaysGameflowPhase>(); 
    v.gameClient = j.at("gameClient").get<LolReplaysGameflowGameClient>(); 
  }
}