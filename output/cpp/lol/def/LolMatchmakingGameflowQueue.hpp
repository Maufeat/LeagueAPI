#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingGameflowGameTypeConfig.hpp"
namespace lol {
  struct LolMatchmakingGameflowQueue { 
    LolMatchmakingGameflowGameTypeConfig gameTypeConfig; 
  };
  inline void to_json(json& j, const LolMatchmakingGameflowQueue& v) {
    j["gameTypeConfig"] = v.gameTypeConfig; 
  }
  inline void from_json(const json& j, LolMatchmakingGameflowQueue& v) {
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolMatchmakingGameflowGameTypeConfig>(); 
  }
}