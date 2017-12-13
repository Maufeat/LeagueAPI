#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMatchmakingGameflowGameTypeConfig { 
    bool reroll; 
  };
  void to_json(json& j, const LolMatchmakingGameflowGameTypeConfig& v) {
  j["reroll"] = v.reroll; 
  }
  void from_json(const json& j, LolMatchmakingGameflowGameTypeConfig& v) {
  v.reroll = j.at("reroll").get<bool>(); 
  }
}