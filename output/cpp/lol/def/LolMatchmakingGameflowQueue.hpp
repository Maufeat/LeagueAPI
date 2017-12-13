#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchmakingGameflowGameTypeConfig.hpp>
namespace lol {
  struct LolMatchmakingGameflowQueue { 
    LolMatchmakingGameflowGameTypeConfig gameTypeConfig; 
  };
  void to_json(json& j, const LolMatchmakingGameflowQueue& v) {
    j["gameTypeConfig"] = v.gameTypeConfig; 
  }
  void from_json(const json& j, LolMatchmakingGameflowQueue& v) {
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolMatchmakingGameflowGameTypeConfig>(); 
  }
}