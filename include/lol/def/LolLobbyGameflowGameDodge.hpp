#pragma once
#include "../base_def.hpp" 
#include "LolLobbyGameflowPhase.hpp"
#include "LolLobbyMatchmakingDodgeState.hpp"
namespace lol {
  struct LolLobbyGameflowGameDodge { 
    std::vector<uint64_t> dodgeIds;
    LolLobbyGameflowPhase phase;
    LolLobbyMatchmakingDodgeState state; 
  };
  inline void to_json(json& j, const LolLobbyGameflowGameDodge& v) {
    j["dodgeIds"] = v.dodgeIds; 
    j["phase"] = v.phase; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolLobbyGameflowGameDodge& v) {
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
    v.phase = j.at("phase").get<LolLobbyGameflowPhase>(); 
    v.state = j.at("state").get<LolLobbyMatchmakingDodgeState>(); 
  }
}