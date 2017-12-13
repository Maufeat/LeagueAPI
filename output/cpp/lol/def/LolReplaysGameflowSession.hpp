#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolReplaysGameflowPhase.hpp>
#include <lol/def/LolReplaysGameflowGameClient.hpp>
namespace lol {
  struct LolReplaysGameflowSession { 
    LolReplaysGameflowPhase phase;
    LolReplaysGameflowGameClient gameClient; 
  };
  void to_json(json& j, const LolReplaysGameflowSession& v) {
    j["phase"] = v.phase; 
    j["gameClient"] = v.gameClient; 
  }
  void from_json(const json& j, LolReplaysGameflowSession& v) {
    v.phase = j.at("phase").get<LolReplaysGameflowPhase>(); 
    v.gameClient = j.at("gameClient").get<LolReplaysGameflowGameClient>(); 
  }
}