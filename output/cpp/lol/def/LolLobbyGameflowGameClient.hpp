#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyGameflowGameClient { 
    bool running; 
  };
  void to_json(json& j, const LolLobbyGameflowGameClient& v) {
    j["running"] = v.running; 
  }
  void from_json(const json& j, LolLobbyGameflowGameClient& v) {
    v.running = j.at("running").get<bool>(); 
  }
}