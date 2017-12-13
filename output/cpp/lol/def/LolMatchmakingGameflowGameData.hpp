#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchmakingGameflowQueue.hpp>
namespace lol {
  struct LolMatchmakingGameflowGameData { 
    LolMatchmakingGameflowQueue queue; 
  };
  void to_json(json& j, const LolMatchmakingGameflowGameData& v) {
  j["queue"] = v.queue; 
  }
  void from_json(const json& j, LolMatchmakingGameflowGameData& v) {
  v.queue = j.at("queue").get<LolMatchmakingGameflowQueue>(); 
  }
}