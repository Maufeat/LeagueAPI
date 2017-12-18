#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderGameflowGameClient { 
    bool running; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderGameflowGameClient& v) {
    j["running"] = v.running; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderGameflowGameClient& v) {
    v.running = j.at("running").get<bool>(); 
  }
}