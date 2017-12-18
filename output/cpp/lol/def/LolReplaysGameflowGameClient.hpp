#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolReplaysGameflowGameClient { 
    bool running; 
  };
  inline void to_json(json& j, const LolReplaysGameflowGameClient& v) {
    j["running"] = v.running; 
  }
  inline void from_json(const json& j, LolReplaysGameflowGameClient& v) {
    v.running = j.at("running").get<bool>(); 
  }
}