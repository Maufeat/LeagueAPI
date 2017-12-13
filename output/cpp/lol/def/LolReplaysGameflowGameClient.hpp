#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolReplaysGameflowGameClient { 
    bool running; 
  };
  void to_json(json& j, const LolReplaysGameflowGameClient& v) {
    j["running"] = v.running; 
  }
  void from_json(const json& j, LolReplaysGameflowGameClient& v) {
    v.running = j.at("running").get<bool>(); 
  }
}