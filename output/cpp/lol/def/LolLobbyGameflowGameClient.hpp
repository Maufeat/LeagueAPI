#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyGameflowGameClient { 
    bool running; 
  };
  inline void to_json(json& j, const LolLobbyGameflowGameClient& v) {
    j["running"] = v.running; 
  }
  inline void from_json(const json& j, LolLobbyGameflowGameClient& v) {
    v.running = j.at("running").get<bool>(); 
  }
}