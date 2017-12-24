#pragma once
#include "../base_def.hpp" 
#include "LolReplaysGameflowPhase.hpp"
#include "LolReplaysGameflowGameClient.hpp"
namespace lol {
  struct LolReplaysGameflowSession { 
    LolReplaysGameflowGameClient gameClient;
    LolReplaysGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolReplaysGameflowSession& v) {
    j["gameClient"] = v.gameClient; 
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolReplaysGameflowSession& v) {
    v.gameClient = j.at("gameClient").get<LolReplaysGameflowGameClient>(); 
    v.phase = j.at("phase").get<LolReplaysGameflowPhase>(); 
  }
}